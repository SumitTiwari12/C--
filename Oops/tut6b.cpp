#include <iostream>
using namespace std; 

class complex{
    int a,b;
    public:
        void setData(int v1,int v2);
        void sumcom(complex o1, complex o2);
        void printData(void);
};

void complex :: setData(int v1,int v2){
    a=v1;
    b=v2;
}

void complex:: sumcom(complex o1, complex o2){
    a = o1.a+o2.a;
    b = o1.b + o2.b;
}

void complex:: printData(void){
    cout<<"The value of a:"<<a<<" and b:"<<b<<endl;
    cout<<"The value of complex number is is "<<a<<" + "<<b<<"i"<<endl;
}

int main() {

    complex c1,c2,c3;
    c1.setData(5,2);
    c1.printData();

    c2.setData(1,2);
    c2.printData();

    c3.sumcom(c1,c2);
    c3.printData();

    
    return 0;
}