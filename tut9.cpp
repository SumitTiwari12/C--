#include <iostream>
using namespace std;

int main()
{
    /*Loops in C++:
 There are three types of loops in C++:
     1. For loop
     2. While Loop
     3. do-While Loop
 */

    //! For loop in C++

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    //   for (int i = 1; i <= 10; i++)
    // {
    //     cout<<i<<endl;
    // }

    //! Example of infinite for loop
    // for (int i = 1; true; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    //! While loop in C++
    // Syntax:

    // while(condition)
    // {
    //     C++ statements;
        //    updation;
    // }

    //*  Printing 1 to 10 using while loop
    // int a = 1;
    // while(a<=10){
    //     cout<<a<<endl;
    //     a++;
    // }

    //! Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //! do While loop in C++
    // Syntax:
    // do
    // {
    //     C++ statements;
            //  updation
    // }while(condition);

    //*  Printing 1 to 40 using while loop

    // int b=1;
    // do{
    //     cout<<b<<endl;
    //     b++;
    // }while(false);
    // false one time run hona hi hai.

    //! GOTO Statement

// ineligible:
//     cout << "You are not eligible to vote!\n";
//     cout << "Enter your age:\n";
//     int age;
//     cin >> age;
//     if (age < 18)
//     {
//         goto ineligible;
//     }
//     else
//     {
//         cout << "You are eligible to vote!";
//     }

    return 0;
}