#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main() {
    // connecting our file with hout stream
    ofstream hout("sample.txt");

     // creating a name string variable and filling it with string entered by the user

    string str1;
    cout<<"Enter Thoughts "<<endl;
    // cin>>str1;  // only store one characters
    getline(cin,str1); // multi line characters
    hout<<str1;

    // disconnecting our file
    hout.close();


    //!Read file
   // connecting our file with hin stream
    ifstream hin("sample.txt");

     // creating a content string variable and filling it with string present there in the text file
    string str2;

    hin>>str2;
      cout<<"The content of the file is "<<endl;
    //   cout<<str2; // only read one characters

    getline(hin,str2);
    cout<<str2;
      
      // disconnecting our file
      hin.close();

    return 0;
}