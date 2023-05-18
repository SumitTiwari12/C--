// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } Shivanshu, rohan, lovish; */
// Shivanshu.salary = 8 makes no sense if salary is private


//! Nesting of Member Functions

#include <iostream>
#include<string>
using namespace std; 

class binary{
    private:
        string s;
        void chk_bin(void);

    public:
        void read(void);
        // void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Please enter correct binary format "<<endl;
            exit(0);
        }
    }
    
}
void binary :: ones_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i) = '0';
        }
    }
    
}
void binary :: display(void){
    cout<<"Displaying binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main() {
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();
    
    return 0;
}