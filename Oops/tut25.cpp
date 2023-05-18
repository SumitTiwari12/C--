//! Initialization list in Constructors in Cpp tut 49

#include <iostream>
using namespace std; 

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int b;
    int a;

    /*
    int b; //problems solve
    int a;
    */

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a*j)

    // Test(int i, int j) : b(j), a(i+b) //todo:- problems because  “a” is being initialized first and the “b” is being initialized second

    // Test(int i, int j): a(i)
    {
        // b=j;
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main() {
     Test t(4, 6);
    
    return 0;
}