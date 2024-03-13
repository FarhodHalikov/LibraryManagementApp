#ifndef MAINCLASS_H
#define MAINCLASS_H  

//Libraries
#include <windows.h>
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <vector>
#include <fstream>

//namespaces
using namespace std;

//Methods

//Next code line simply clears the input buffer for the next input
//I was getting problems with it (Reminder for myself: 'Title:Author:' case)
void ClearBuffer()
{
    cin.ignore(numeric_limits<streamsize> :: max(), '\n');
}

//Clear console from previous output
void ClearConsole()
{
    system("cls");
}

//Input any key to continue
void ReadKey()
{
    ClearBuffer();
    cout << "\nPress Any Key to continue...";
    cin.get();
}
#endif
