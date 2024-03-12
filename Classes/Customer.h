#ifndef CUSTOMERCLASS_H
#define CUSTOMERCLASS_H

#include "Class.h"
#include "Book.h"

class Customer
{
    public:
     
    //Init variables
    string fullname;
    string contact;
    book purchased_book;

    //Constructors
    Customer(){};

    Customer
    (
        const string& fullname, 
        const string& contact
    ) 
    : fullname(fullname), contact(contact){}

    //Init Methods

    //Input Method 
    void SetCustomer()
    {
        cout << "Fullname: "; getline(cin,fullname);
        cout << "Contact: "; getline(cin, contact);
        purchased_book.SetBook();
    }

    //Output method
    void PrintCustomer()
    {
        cout << "Fullname: " << fullname << endl;
        cout << "Contact: " << contact << endl;
        cout << "Purchased Book: " << purchased_book.title << endl;
    }
};
#endif