#include <iostream>
using namespace std;
//Global Scope
int glo = 6;

void sum(){

    int a; 
    //check local ---> main me nhi mele  tho
    //check globale --> global main check krega
    cout<<glo<<endl;
}

int main(){
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    cout<<"The value a is "<<a <<"\nThe value b is "<<b<<"\nThe value pi is "<<pi<<"\nThe value c is "<<c<<"\nThe value is_true is "<<is_true<<endl;

    //Lacal scope (local Varibale)
    //local varible > global varible

    int glo=9;
    sum(); 
    cout<<glo<<endl;

    //!access globale variable.
    cout<<::glo;
    return 0;
}