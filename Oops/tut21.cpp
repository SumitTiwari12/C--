// Ambiguity Resolution in Inheritance in C++ 
#include <iostream>
using namespace std; 

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};

class Derived : public Base1, public Base2{
     int a;
      public:
        void greet(){
            Base2::greet();
        }
};

int main() {
    
    Base1 b1obj;
    Base2 b2obj;

    b1obj.greet();
    b2obj.greet();

     Derived d;
     d.greet();


    return 0;
}