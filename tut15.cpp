#include <iostream>
using namespace std; 


//! Call by reference using pointers
void swapvalue(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//! Call by reference using C++ reference Variables  
// int & //using change calue

/*int &*/ void othemwthodswapvalue(int &x, int &y){
    cout<<&x;
    int temp;
    temp = x;
    x = y;
    y = temp;
    // return x;
}




int main() {

    int a = 5 , b = 15;


    // cout<<"The value of a before swap function run "<<a<<endl;
    // cout<<"The value of b before swap function run "<<b<<endl;

    // swapvalue(&a,&b);
    //   cout<<"The value of a After swap function run "<<a<<endl;
    // cout<<"The value of b After swap function run "<<b<<endl;


//! Other swap method

    cout<<"The value of a before "<<a<<endl;
    cout<<"The value of b before "<<b<<endl;

    othemwthodswapvalue(a,b);
    //*This will swap a and b using reference variables;

    // othemwthodswapvalue(a,b)= 854;

      cout<<"The value of a After "<<a<<endl;
    cout<<"The value of b After "<<b<<endl;


    
    return 0;
}