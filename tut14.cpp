#include <iostream>
using namespace std; 

//! Function prototype
//* type function-name (arguments);

int sum(int a, int b){  //!--> Acceptable
    return a+b;
}
// int sum(int a, b); //!--> Not Acceptable 


int mul(int, int); //!--> Acceptable 


void gretting(){ //!--> Acceptable 
    cout<<"Good Morning";
}
// void gretting(void); //!--> Acceptable 

void gretting2(void);

int main() {

    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

     // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    cout<<"The mul is "<<mul(num1, num2)<<endl;

    gretting();
    gretting2();
    
    return 0;
}

int mul(int a, int b){
    // Formal Parameters a and b will betaking values from actual parameters num1 and num2.
    int c = a*b;
    return c;

}

void gretting2(){
    cout<<"\nHello, Good Afternoon";
}