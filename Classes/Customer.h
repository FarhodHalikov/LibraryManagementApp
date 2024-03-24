#ifndef CUSTOMERCLASS_H
#define CUSTOMERCLASS_H
#include "Class.h"
#include "Book.h"
#include "Library.h"

class Customer
{
    public:

    //Init variables
    string fullname;
    string contact;
    string purchased_book_isbn;
    bool paid;

    //Constructors
    Customer(){};

    Customer
    (
        const string& fullname, 
        const string& contact,
        const string& purchased_book_isbn,
        const bool& paid
    ) 
    : fullname(fullname), contact(contact), purchased_book_isbn(purchased_book_isbn),paid(paid){}

    //Init Methods

    //Input Method 
    void SetCustomer()
    {
        ClearBuffer();
        cout << "Fullname: "; getline(cin,fullname);
        cout << "Contact: "; getline(cin, contact);
        cout << "Book Purchased (isbn): "; getline(cin, purchased_book_isbn);
        cout << "Payment [0:1]: "; cin >> paid;
    }

    //Output method
    void PrintCustomer()
    {
        cout << "Fullname: " << fullname << endl;
        cout << "Contact: " << contact << endl;
        cout << "ISBN: " << purchased_book_isbn << endl;
        cout << "Paid: "<< (paid == 1 ? "True":"False") << endl;
    }
};
#endif