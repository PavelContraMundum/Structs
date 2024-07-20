//
//  main.cpp
//  First
//
//  Created by Pavel Štička on 20.07.2024.
//

#include <iostream>

using namespace std;

struct Book {
    string title;
    string authorFirstName;
    string authorSecondName;
    int year;
    
};

void printSelectedBook(Book book){
    cout << "Libi se mi " + book.title << endl;
};

int main(int argc, const char * argv[]) {
   
    Book book1;
    book1.title="Jmeno ruze";
    book1.authorFirstName="Umberto";
    book1.authorSecondName="Eco";
    book1.year=2024;
    
    Book book2;
    book2.title="Dva roky prazdnin";
    book2.authorFirstName="Jules";
    book2.authorSecondName="Verne";
    book2.year=2023;
        
    printSelectedBook(book1);
    
    return 0;
}
