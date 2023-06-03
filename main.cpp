#include <iostream>
#include <vector>
#include "material.h"
#include "book.h"
#include "library.h"
int main()
{
    //a book instance
    int year = 2023;
    std::string title = "Effectie C++";
    std::string author = "Meyers";
    std::string gener = "Computer science";
    int pages = 321;
    Book book1 (title, author, year, gener, pages);
    
    //a juranl instance
    std::string j_t = "Vouge";
    int volume = 77;
    int issue = 12;
    int j_year = 2121;
    std::string subject = "Insight to feature trends";
    Jurnal jurnal( j_t, volume , issue, j_year, subject);
  
    //a DVD instance
    std::string d_title{ "Dandax artashamayan"};
    int d_date{ 1999};
    std::string director{"Michael Jackson"};
    int d_duration = 1500;
    DVD dvd( d_title , d_date , director, d_duration);
    //new library
    Library mylib;
    mylib.add_book( book1);
    mylib.add_jurnal(jurnal);
    mylib.add_dvd(dvd);
    //searching by title
    mylib.find( d_title);
    mylib.find( j_t);

    //borrowing and returning
    int num = mylib.find( title );
    bool book1_status = mylib[num]->getBorrowed();   
    mylib[num]->returning();
    mylib[num]->borrow();
    mylib[num]->returning();

    //removing materials
    mylib.remove(2);
    mylib.find(d_title);
}

