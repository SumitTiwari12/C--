#include <iostream>
using namespace std; 

class  Complex{
    int r,m;
    public:
        void getData(){
            cout<<"The real part is "<<r<<endl;
            cout<<"The imaginary part is "<<m<<endl;
        }
       void setData(int a, int b){
         r=a;
         m=b;
        }

};

int main() {
    // Complex c1;
    // Complex *ptr = &c1;
    //or
    Complex *ptr = new Complex;

    // (*ptr).setData(1,54);
    ptr->setData(1,54);

    // (*ptr).getData();
    ptr->getData();

    //Array of object

    Complex *ptr1 = new Complex[4];
    ptr->setData(12,5);
    ptr->getData();


    return 0;
}