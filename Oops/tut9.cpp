#include <iostream>
using namespace std;

/*
//*********************
//! EXAMPLE :- 1
//*********************

class Y;

class X {
    int a;
    friend void add(X,Y);
    public:
     void setData(int a1){
        a = a1;
     }
};

class Y{
     int b;
     friend void add(X,Y);
    public:

     void setDataint (int b1){
        b = b1;
     }
};


void add (X o1, Y o2){
    cout<<"The Sum Of Data of X and Y objects gives me "<<o1.a+o2.b;
}
*/


//*********************
//! EXAMPLE :- 2
//*********************

class c2;

class c1 {
    int a;
    friend void swapNum(c1 &,c2 &);
    public:
     void setData(int a1){
        a = a1;
     }
     void display(void){
        cout<<"The Value of a is : "<<a<<endl;
     }
};

class c2{
     int b;
     friend void swapNum(c1 &,c2 &);
    public:

     void setDataint (int b1){
        b = b1;
     }
      void display(void){
        cout<<"The Value of b is : "<<b<<endl;
     }
};


void swapNum(c1 &o1, c2 &o2){
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}



int main()
{

    //*********************
    //! EXAMPLE :- 1
    //*********************
    // X a;
    // Y b;
    // a.setData(5);
    // b.setDataint(10);
    // add(a,b);


     //*********************
    //! EXAMPLE :- 2
    //*********************

    c1 s1;
    c2 s2;

    s1.setData(5);
    s2.setDataint(6);
    s1.display();
    s2.display();

    swapNum(s1,s2);
    s1.display();
    s2.display();


    return 0;
}