#include <iostream>
using namespace std; 

struct emp
{
    int eId; //4
    char favChar; //1
    float salary; //4
};


union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};




int main() {
    //! Structures in C++
    // The structure is a user-defined data type that is available in C++. Structures are used to combine different types of data types, just like an array is used to combine the same type of data types.


    struct emp abc;
    abc.eId =245;
    abc.favChar = 'c';
    abc.salary = 854;

    cout<<"The value is "<<abc.eId<<endl; 
    cout<<"The value is "<<abc.favChar<<endl; 
    cout<<"The value is "<<abc.salary<<endl; 
    cout<<sizeof(abc)<<endl;


    

    //! Unions in C++
    // Unions are similar to structures but they provide better memory management then structures.  Unions use shared memory so only 1 variable can be used at a time.

     union money m1;
    m1.rice = 34;
    m1.car = 'A';
    cout<<m1.car<<endl;

    // cout<<sizeof(m1)<<endl;


        //! Enums in C++
    // Enums are user-defined types which consist of named constants. Enums are used to make the program more readable.
  
  enum Meal{ breakfast, lunch, dinner};
    Meal m2 =  breakfast;
    cout<<m2<<endl;
    cout<<(m2==0);
    return 0;
}