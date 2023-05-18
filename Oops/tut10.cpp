#include <iostream>
using namespace std; 

class Complex{
    int a,b;
    public:

     Complex(int,int);
    //  Complex(void); // Constructor declaration
       void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

Complex:: Complex(int a1, int b1){  // ----> This is a parameterized constructor as it takes 2 parameters
    a=a1;
    b=b1;
}


// Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
// {
//     a = 10;
//     b = 0;
//     // cout<<"Hello world";
// }


int main() {
    // Implicity call
    Complex c(50,5);
    c.printNumber(); 

    //Explicit call
    Complex b = Complex(4,2);
    b.printNumber();
    return 0;
}


/*
Constructors in C++

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

//! Important Characteristics of Constructors in C++

.     A constructor should be declared in the public section of the class
.     They are automatically invoked whenever the object is created
.     They cannot return values and do not have return types
.     It can have default arguments
.     We cannot refer to their address
*/