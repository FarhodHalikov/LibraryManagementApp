#include "Classes/Class.h"
#include "Classes/Library.h"

/*
Notes:
1. Add purchased_book to customer
2. Create the Pages: 4-8
3. Create report page that includes: book counter, customers counter
4. Create guideline page for default case
*/

//Program Entry Point
int main(void)
{
    //init varibles
    int input;
    int index;
    Library library;

    while (input != 0)
    {
        ClearConsole();

        //Main Page Design
        cout << "\n NOTE: TYPE 0 TO CLOSE THE APPLICATION  !!!\n" << endl;
        cout << "\n -- Library App --\n" << endl;
        cout << " * Books *" << endl;
        cout << " 1. Books Available" << endl;
        cout << " 2. Add Book" << endl;
        cout << " 3. Remove Book\n" << endl;
        cout << " * Customers *"  << endl;
        cout << " 4. Print All Customers" << endl;
        cout << " 5. Add Customer" << endl;
        cout << " 6. Remove Customer\n" << endl;
        cout << " * Database *" << endl;
        cout << " 7. Save Books to books.txt" << endl;
        cout << " 8. Save Customers to customers.txt" << endl;
        cout << "\n 0. Exit the program\n\n" << endl;

        //Main Input
        cout << " Input: ";
        cin >> input;

        //Switch Between the Pages
        switch (input)
        {
            case 0:
                return 0;

            //Books Available Page
            case 1:
                ClearConsole();
                cout << " * Books Available Page *\n" << endl;
                library.PrintBooks();
                ReadKey();
                break;

            //Adding Book Page
            case 2:
                ClearConsole();
                cout << " * Adding Book Page *\n" << endl;
                library.AddBook();
                ReadKey();
                break;

            //Delete Book Page
            case 3:
                ClearConsole();
                cout <<" * Removing Book Page *\n\n";
                cout << " Input INDEX of the book you'd like to remove from library\n";
                cout << " Index input: ";
                ClearBuffer();
                cin >> index;
                library.DeleteBook(index);
                ReadKey();
                break;

            //Print Customers Page
            case 4:
                ClearConsole();
                cout << "* Print All Customers Page *\n" << endl;
                library.PrintCustomers();
                ReadKey();
                break;
            
            //Add Customer Page
            case 5:
                ClearConsole();
                cout << "* Add Customer Page *\n" << endl;
                library.AddCustomer(); 
                break;

            //Remove Customer Page
            case 6:
                ClearConsole();
                cout <<" * Removing Customer Page *\n\n";
                cout << " Input INDEX of the Customer you'd like to remove from library\n";
                cout << " Index input: ";
                ClearBuffer();
                cin >> index;
                library.DeleteCustomer(index);
                ReadKey();
                break;

            //Save Books to 'database'
            case 7:
                ClearConsole();
                library.SaveBooks();
                ReadKey();
                break;

            //Save Customers to 'database'
            case 8:
                ClearConsole();
                library.SaveCustomers();
                ReadKey();
                break;
            
            //Output Message if Input is invalid
            default:
                ClearConsole();
                cout << "ERROR: Invalid input." << endl;
                cout << "Follow Input Guideline:"<< endl;
                cout << "\n-- Main Page --" << endl;
                cout << "* input number in range 1-8 to switch between the pages"<<endl;
                cout << "* to close the application please input 0" << endl;
                cout << "* checkout ID (i.e. index) before entering pages like: remove book or remove customer\n" << endl;
                cout << "\n-- Add Book Page --" << endl;
                cout << "* Title: <string> *" << endl;
                cout << "* Author: <string> *" << endl;
                cout << "* Publisher: <string> *" << endl;
                cout << "* Price: <double> *" << endl;
                cout << "* Quantity: <int> *" << endl;
                cout << "\n-- Add Customer --" << endl;
                cout <<  "* Fullname: <string> *" << endl;
                cout << "* Contact: <string> *\n" << endl;
                ReadKey();
                break;
        }
    }
}