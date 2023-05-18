#include <iostream>
using namespace std; 



int main() {
    //! C++ Single Dimensional Array

      int marks[] = {23, 45, 56, 89};

        // You can change the value of an array
        // marks[2] = 455;
        // cout<<"These are marks"<<endl;
        // cout<<marks[0]<<endl;
        // cout<<marks[1]<<endl;
        // cout<<marks[2]<<endl;
        // cout<<marks[3]<<endl;


    //!  or
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    //! Using for loop print array
    
    // for (int i = 0; i < 4; i++)
    // {
    //   cout<<"The value of mathMarks "<<i<<" is "<<mathMarks[i]<<endl;
    // }


    //! C++ Multidimensional

     //declaration of 2D array ex matric jesa benega
    //  index start 0
    int test[3][3] =  {  
      //0C  1C 2C
        {2, 5, 5},  // 0 row
        {4, 0, 3},  // 1 row
        {9, 1, 8}  // 2 row
         } ; 



    // int myTest[2][3];
    // myTest[0][0]=5;
    // myTest[0][1]=10;   
    // myTest[1][1]=15;  
    // myTest[1][2]=20;  
    // myTest[2][0]=30;  
    // myTest[2][2]=10;
    // cout<<myTest[0][1]<<endl;

    cout<<test[0][2]<<endl;  //rc
    cout<<test[2][0]<<endl;  //rc

    for (int i = 0; i < 3; i++) 
    {
      for (int j = 0; j < 3; j++)
      {
        cout<<test[i][j]<<" ";
      }
         cout<<"\n"; //new line at each row   

    }
    


    //! Pointers and arrays

    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
     cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
 
    return 0;
}