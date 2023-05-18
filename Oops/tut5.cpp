//Static mamber & mathod tut24

#include <iostream>
using namespace std; 

class Emp{
    int id;
    static int count;
    public:
        void setId(void){
            cout<<"Enter Your Employee Id And Employee Number is "<<count<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"Your Employee Id is "<<id<<endl;
        }
    static void getCount(void){
        cout<<"The count of Empolyee is "<<count<<endl;
    }
};

int Emp::count=1;

int main() {
    Emp shivanshu,rohan;

    Emp::getCount();
    shivanshu.setId();
    shivanshu.getData();

     Emp::getCount();
    rohan.setId();
    rohan.getData();
    return 0;
}