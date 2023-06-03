//Library class. It havs methods for adding and removing materials, checking if a material is in the library, and borrowing and returning materials.
//  Library class has copy constructors, copy assignment operators, and destructors for proper dynamic memory management.
#include "dvd.h"
#include "jurnal.h"
class Library
{
    public:
    Library(){}
    ~Library(){ 
        for( auto & it : m_library) {
            delete it;
        }
    }
    Library( const Library&) =delete;
    Library& operator= ( const Library&) =delete;
    void add_book(const Book &);
    void add_jurnal(const Jurnal &);
    void add_dvd(const DVD &);
    void remove(int);
    int  find(std::string & title);
    Material* & operator[](int);
    private:
    std::vector <Material *> m_library;
};
void Library:: add_book(const Book & item){
    m_library.push_back(new Book {item});
}
void Library:: add_jurnal(const Jurnal & item){
   m_library.push_back(new Jurnal {item});
}
void Library:: add_dvd(const DVD & item){
    m_library.push_back(new DVD {item});
}
void Library::remove(int index){
    delete m_library[index];
    m_library.erase(m_library.begin() + index);
    std::cout << "Item is successfully removed" << std::endl;
}
int  Library::find(std::string & title){
    for (int i{} ; i< m_library.size() ; i++){
        if ( Book * ptr = dynamic_cast<Book *>(m_library[i])) { 
             if ( title == ptr->get_title() ) {
                std::cout << "A title is found" << std::endl;
                ptr->display();
                return i;
         }
      } else if ( Jurnal * ptr = dynamic_cast<Jurnal *>(m_library[i])) { 
             if ( title == ptr->get_title() ) {
                std::cout << "A title is found" << std::endl;
                ptr->display();
                return i;
         }
      } else if ( DVD * ptr = dynamic_cast<DVD *>(m_library[i])) { 
             if ( title == ptr->get_title() ) {
                std::cout << "A title is found" << std::endl;
                ptr->display();
                return i;
         }
      }
    }
     std::cout << "A title is not found! " << std::endl;
     return -1;
} 
Material* & Library::operator[](int index){
    return m_library[index];
}
