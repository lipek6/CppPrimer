#include <iostream>
#include <fstream>
#include <vector>

class Book
{
private:
    std::string  m_id        = "";
    std::string  m_title     = "";
    std::string  m_author    = "";
    std::string  m_synopsis  = "";
    unsigned int m_numPages  = 0;
    
public:
    Book() {}
    Book(const std::string& id,     const std::string& title, 
         const std::string& author, const std::string& synopsis,
         const unsigned int& numPages)
         : m_id        (id)
         , m_title     (title)
         , m_author    (author)
         , m_synopsis  (synopsis)
         , m_numPages  (numPages)
    {
    }
    
    // All these functions are const, so they are unable to change data.
    // That means we have const correcteness.
    const std::string& getId() const
    {
        return m_id;
    } 
    const std::string& getTitle() const
    {
        return m_title;
    } 
    const std::string& getAuthor() const
    {
        return m_author;
    }    
    const std::string& getSynopsis() const
    {
        return m_synopsis;
    }   
    const unsigned int getNumPages() const
    {
        return m_numPages;
    }
    void printData() const
    {
        std::cout << "Book id        : " << m_id       << std::endl
                  << "Title          : " << m_title    << std::endl        
                  << "Author         : " << m_author   << std::endl
                  << "Synopsis       : " << m_synopsis << std::endl
                  << "Number of Pages: " << m_numPages << std::endl;
    }
    ~Book() {}     
};



class Library 
{
private:
    std::string m_name = "Library";
    std::vector<Book> m_books;
    
public:
    Library() {}
    Library(const std::string& name)
        : m_name(name)
    {
    }
    
    void addBook(const Book& book)
    {
        m_books.push_back(book);
    }
    void loadFromFile(const std::string& filename)
    {
        std::ifstream fin(filename);
        
        std::string dataArr[4] = {};
        std::string temp;
        unsigned int numPages;
        
        int i = 0;
        while(fin >> temp)
        {
            if(temp == ",")
            {
                i++;
                if(i >= 4)
                {
                    fin >> numPages;
                    m_books.emplace_back(dataArr[0], dataArr[1], dataArr[2], dataArr[3], numPages);
                    dataArr[0] = "";
                    dataArr[1] = "";
                    dataArr[2] = "";
                    dataArr[3] = ""; 
                    i = 0;
                }
                continue;
            }

            dataArr[i] += temp + " ";
        }
    }
    const std::vector<Book>& getBooks() const
    {
        return m_books;
    }
    void printData() const
    {
        std::cout << m_name << ":" << std::endl;
        for(const Book& b: m_books)
        {
            b.printData();
            std::cout << std::endl;
        }
        std::cout << "End of Library" << std::endl;
    }
    
    ~Library() {}
};



int main()
{
    Book item0("0001", "Halo", "Jorge", "Cool book about aliens .", 235);
    const Book item1("0002", "Halo 2", "Carter", "Book about death .", 177);
    
    Library lib0("Bungie Library");
    lib0.addBook(item0);
    lib0.addBook(item1);
    lib0.addBook(Book("0003", "Halo 3", "Arbiter", "Alien and human love .", 500));
    lib0.printData();
    
    Library lib1("Valve Library");
    lib1.loadFromFile("valve.txt");
    lib1.printData();

    return 0;
}