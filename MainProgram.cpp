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
            //Books Available Page
            case 1:
                ClearConsole();
                cout << " * Books Available Page *\n" << endl;
                library.PrintBooks();
                ClearBuffer();
                ReadKey();
                break;

            //Adding Book Page
            case 2:
                ClearConsole();
                cout << " * Adding Book Page *\n" << endl;
                library.AddBook();
                cout << "\n Book is Added!\n" << endl;
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
                ClearBuffer();
                ReadKey();
                break;

            //Print Customers Page
            case 4:
                ClearConsole();
                cout << "* Print All Customers Page *\n" << endl;
                library.PrintCustomers();
                ClearBuffer();
                ReadKey();
                break;
            
            //Add Customer Page
            case 5:
                break;

            //Remove Customer Page
            case 6:
                break;

            //Save Books to 'database'
            case 7:
                break;
            
            //Save Customers to 'database'
            case 8:
                break;
            
            //Output Message if Input is invalid
            default:
                ClearConsole();
                cout << "ERROR: Invalid input." << endl;
                cout << "Follow Input Guideline:"<< endl;
                cout << "\n-- Main Page --" << endl;
                cout << "* input number in range 1-8 to switch between the pages"<<endl;
                cout << "* to close the application please input 0" << endl;
                cout << "* checkout ID (i.e. index) before entering pages like: remove book or remove customer" << endl;
                ClearBuffer();
                ReadKey();
                break;

        }
    }
}