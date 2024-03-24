#ifndef BOOKCLASS_H
#define BOOKCLASS_H

#include "Class.h"

struct book
{
    //Init variables
    string title;
    string author;
    string isbn;
    double price;
    int quantity;


    //constructors
    book (){};
    book
    (
        const string& title, 
        const string& author,
        const string& isbn,
        double price,
        int quantity
    ): title(title), author(author), isbn(isbn), price(price), quantity(quantity){}


    //Destructor
    // ~book()
    // {
    //    cout << "Book is deleted!" << endl;
    // };

    //Init Methods

    //User Input Book Data  
    void SetBook()
    {
        ClearBuffer();
        cout << "Title: ";     getline(cin , title);
        cout << "Author: ";    getline(cin , author);
        cout << "ISBN: ";      getline(cin, isbn);
        cout << "Price: ";     cin >> price;
        cout << "Quantity: ";  cin >> quantity;
    }

    //Output Book Data 
    void PrintBook()
    {
        cout << "Title: "     << title << endl;
        cout << "Author: "    << author << endl;
        cout << "ISBN: "      << isbn << endl;
        cout << "Price: "     << price << "$" << endl;
        cout << "Quantity: "  << quantity << endl; 
    }; 
};

#endif