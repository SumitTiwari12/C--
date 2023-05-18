#include <iostream>
#include <fstream>
#include<string.h>
using namespace std; 

int main() {

    //! create file
    
    ofstream shivanshu;
    shivanshu.open("All.txt");
    shivanshu<<"The member function eof(End-of-file) returns a boolean true if the file reaches the end of it and faUnderstanding the snippet below:\n";

    shivanshu<<"Hello World";
    shivanshu.close();


//! Read file
    ifstream s2;
    s2.open("All.txt");

    string st;
      // giving output the string lines by storing in st until the file reaches the end of it
    while (s2.eof()==0)
    {
         getline(s2,st);
        cout<<st<<endl;
    }
    
    s2.close();

    
    return 0;
}