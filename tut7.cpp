#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
    //  int a = 34; 
    // cout<<"The value of a was: "<<a<<endl;

    //  a = 45; 
    // cout<<"The value of a is: "<<a<<endl;

    //! Constants in C++
    /*
    const int b = 34; //const does not change
    cout<<"The value of b was: "<<b<<endl;

     b = 45;  //* You will get an error because b is a constant

    cout<<"The value of b is: "<<b<<endl;  
    */


    //! Manipulators in C++

     int a =3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    //include <iomanip>   using setw
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;


     //! Operator Precedence
    int a1 =3, b1=4;
    // int c1 = (a1*5)+b1;
    int c1 = ((((a1*5)+b1)-45)+87);
    cout<<c1;
    return 0;
}