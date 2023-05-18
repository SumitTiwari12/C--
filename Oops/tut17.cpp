#include <iostream>
using namespace std; 

class base{
    int d1; // Private by default and not inheritable
    public:
        int d2;
        void setData(void);
        int getData1();
        int getData2();

};

void base ::setData(void){
    d1 = 10;
    d2 = 20;
}

int base::getData1(){
    return d1;
}

int base::getData2(){
    return d2;
}


class derived:public base{
    int d3;
    public:
        void process();
        void display();
};

void derived::process(){
    d3 = d2*getData1();
}

void derived::display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<d2<<endl;
    cout<<"Value of data 3 is "<<d3<<endl;
}

int main() {

    derived der;
    der.setData();
    der.process();
    der.display();
    cout<<der.d2;
    
    return 0;
}