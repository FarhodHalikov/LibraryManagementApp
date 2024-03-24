#ifndef LIBRARYCLASS_H
#define LIBRARYCLASS_H

#include "Class.h"
#include "Customer.h"
#include "Book.h"

class Library
{
    public:
    //Init variables 

    //vectors
    vector<book> books =  {   //Default books available in library
        {"Harry Potter and Sorcerer's Stone", "J.K. Rowling", "11-22-33", 56.99, 50},
        {"The Great Gatsby", "F. Fitzgerald", "12-23-34", 60.99,50},
        {"1984", "George Orwell", "13-34-34", 60.99, 50},
        {"Animal Farm", "George Orwell", "23-44-55", 69.99, 50}
    };

    vector<Customer> customers =
    {
        Customer("John Snow", "john.snow@gmail.com", "11-22-33", true), //paid 
        Customer("Harry Potter", "potterharry@gmai.com", "13-34-34" ,false) //not paid
    };
    
    //filenames
    string customer_file = "customers.txt";
    string book_file = "books.txt";
    string library_file = "library_info.txt";


    //Init Methods 

    //Add book to books 
    void AddBook()
    {
        // create space for new item at the end of the vector
        books.emplace_back(); 
        // Input data for previously assigned space in memory, vector
        books.back().SetBook();
        cout << "Book is added!" << endl;
    }

    // Delete book at index from books
    void DeleteBook(int index)
    {
        // Delete book if index is inside of the books' size
        if (index >= 0 && index < books.size())
        {
            books.erase(books.begin()+index);
            cout << "\n Book at index " << index << " is deleted!\n" << endl;
        }
        else 
            cout << "\n Invalid Index. Index out of range." << endl;
    }
    
    // Output essential data about library
    void PrintLibraryData()
    {
        cout << "Books Count: " << books.size() << endl;
    }
     
    // Printing All Books + index 
    void PrintBooks()
    {
        for (int i = 0; i < books.size(); i++)
        {
            books[i].PrintBook(); 
            cout << "Index: " << i; 
            cout << "\n\n";
            Sleep(1000);
        }
    }

    // Add customer to customers
    void AddCustomer()
    {
        customers.emplace_back();
        customers.back().SetCustomer();
    }

    // Delete cuctomer at index
    void DeleteCustomer(int index)
    {
        if (index >= 0 && index <= customers.size())
        {
            customers.erase(customers.begin()+index);
            cout << "Customer at index " << index << " is deleted" << endl;
        }
        else cout << "Invalid index!" << endl;
    }

    //output customers + index (AKA ID)
    void PrintCustomers()
    {
        for (int i = 0; i < customers.size(); i++)
        {
            customers[i].PrintCustomer();
            cout << "Index: " << i << "\n\n";
            Sleep(1000);
        }
    }

    //Sava Books' data to books.txt
    void SaveBooks()
    {
        //Open file to write
        ofstream outfile(book_file);

        if (outfile.is_open())
        {
            outfile << "*Books Available in Library*" << "\n\n";
            for (int i = 0; i < books.size(); i++)
            {
                outfile << "Title: " << books[i].title << endl;
                outfile << "Author: " << books[i].author << endl;
                outfile << "ISBN: " << books[i].isbn << endl;
                outfile << "Price: " << books[i].price << "$" << endl;
                outfile << "Quantity: " << books[i].quantity << endl;
                outfile << "Index: " << i << "\n\n";
            }
            cout << "Books Data is Saved in " << book_file << endl; 
        }
    }

    // int findBookByIsbn(const vector<book>& books, const string& isbn)
    // {
    //     for (size_t i = 0; i < books.size(); i++)
    //     {
    //         if (books[i].isbn == isbn)
    //             return i; //if books is found return its index
    //     }
    //     return -1; //return -1 if not found
    // }

    //Sava Customers' data to customers.txt
    void SaveCustomers()
    {
        //Open file to write
        ofstream outfile(customer_file); 

        if (outfile.is_open())
        {
            outfile << "*Customers of The Library*" << "\n\n";
            for (int i = 0; i < customers.size(); i++)
            {
                outfile << "Fullname: " << customers[i].fullname << endl;
                outfile << "Contact: " << customers[i].contact << endl;
                outfile << "ISBN: " << customers[i].purchased_book_isbn << endl;
                outfile << "Paid: " << (customers[i].paid == 1 ? "True": "False") << endl;
                outfile << "Index: " << i << "\n\n";
            }
            cout << "Customers Data is Saved in " << customer_file << endl;
        }
        else 
            cout << "Couldn't open a file!" << endl;
    }
};
#endif