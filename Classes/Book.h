#ifndef BOOKCLASS_H
#define BOOKCLASS_H

#include "Class.h"

struct book
{
    //Init variables
    string title;
    string author;
    string publisher;
    double price;
    int quantity;


    //constructors
    book (){};
    book
    (
        const string& title, 
        const string& author,
        const string& publisher,
        double price,
        int quantity
    ): title(title), author(author), publisher(publisher), price(price), quantity(quantity){}


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
        cout << "Title: ";      getline(cin , title);
        cout << "Author: ";    getline(cin , author);
        cout << "Publisher: "; getline(cin, publisher);
        cout << "Price: ";     cin >> price;
        cout << "Quantity: ";  cin >> quantity;
    }

    //Output Book Data 
    void PrintBook()
    {
        cout << "Title: "     << title << endl;
        cout << "Author: "    << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: "     << price << "$" << endl;
        cout << "Quantity: "  << quantity << endl; 
    }; 
};

#endif