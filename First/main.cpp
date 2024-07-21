//
//  main.cpp
//  First
//
//  Created by Pavel Štička on 20.07.2024.
//

#include <iostream>
#include<list>

using namespace std;

struct Book {
    string title;
    string authorFirstName;
    string authorSecondName;
    int year;
    
};

class Author {
private:
    string FirstName;
    string SecondName;
    list<string>PublishedTitles;
    
public:
    Author(string firstName, string secondName){
        FirstName=firstName;
        SecondName=secondName;
    }
    
    
    void printAuthor(){
        cout << "Muj oblibeny autor je " + FirstName + " " + SecondName + "." << endl;
        cout << "Jeho tituly jsou:" << endl;
        for(string bookTitle: PublishedTitles){
            cout << bookTitle << endl;
        }
                
    }
    
    void addTile(string title){
        PublishedTitles.push_back(title);
    }
    
    
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
    
    Author autor1("Jules", "Verne");
    autor1.addTile("Dva roky prazdnin");
    autor1.addTile("Dvacet tisic mil pod morem");
    autor1.addTile("Na komete");
    autor1.printAuthor();
    
    
    Author autor2("Umberto", "Eco");
    autor2.addTile("Jmeno ruze");
    autor2.addTile("Tajemny plamen kralovny Loany");
    autor2.addTile("Ostrov vcerejsiho dne");
    autor2.printAuthor();
        
    printSelectedBook(book1);
    
    return 0;
}
