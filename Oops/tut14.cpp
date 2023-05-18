#include <iostream>
using namespace std; 

class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;   
        }

      //* When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called "<<endl;
            a=obj.a;   
        }

        void show(void){
            cout<<"The Number for this object is "<<a<<endl;
        }
};

int main() {
    Number x,y,z(5),z2;
    x.show();
    z.show();
    y.show();

    Number Z1(z); // Copy constructor invoked
    Z1.show();
    

     z2 = z; // Copy constructor not called
     z2.show();

    Number z3 = z; // Copy constructor invoked
    z3.show();


      // z1 should exactly resemble z  or x or y


    return 0;
}