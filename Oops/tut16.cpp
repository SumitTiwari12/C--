#include <iostream>
using namespace std; 


 //* Derived Class syntax
//* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
//* {
//*     class members/methods/etc...
//* }



//Base Class

class Employee{
    public:
        int id;
        float salary;
        Employee(){}
        Employee(int inpId){
            id = inpId;
            salary = 35210.25;
        }
};

// Creating a Programmer class derived from Employee Base class

/*
Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/

class Programmer : public Employee{
    public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
        salary = 6325.85;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main() {

    Employee a1(5),a2(55);
    cout<<a1.id<<endl<<a1.salary;

     Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    cout << skillF.salary<<endl;
    skillF.getData();
    

    
    return 0;
}