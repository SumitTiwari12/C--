#include <iostream>
#include<fstream>
#include<string.h>

using namespace std; 

//! These are some useful classes for working with files in C++

// fstreambase
// ifstream --> derived from fstreambase (	Reads from files)
// ofstream --> derived from fstreambase (Creates and writes to files)


//! In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// 1. Using the constructor
// 2. Using the member function open() of the class

int main() {

    //! Opening files using constructor and writing it
    // string st = "Hello I am Shivanshu Tiwari";
    // ofstream shivanshuOut("tut2sample.txt");
    // shivanshuOut<<st;


    //! Opening files using constructor and reading it
    string str2;
    ifstream shivanshuIn("tut2sample.txt");  // Read operation

    shivanshuIn>>str2;
    // cout<<str2; 
    getline(shivanshuIn,str2);
    cout<<str2;
    
    return 0;
}