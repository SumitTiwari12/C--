#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    int vip = 0;

    //! 1. Selection control structure: If else-if else ladder

    // if(age>18){
    //     cout<<"You can Drive";
    // }

    // else if (age<18 && vip==1){
    //      cout<<"You can Drive";
    // }

    // else{
    //     cout<<"You are not eligable this time";
    // }

    //! 2. Selection control structure: Switch Case statements

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
     cout<<"Done with switch case";
    return 0;
}