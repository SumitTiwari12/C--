#include <iostream>
using namespace std; 

class A{
    int a;
    public:
        // void setData(int a){
        A& setData(int a){
            this->a=a;
            return *this;
        }
        void getData(){
            cout<<"The Data is "<<a<<endl;

        }
};

int main() {
    A a,b;
    // a.setData(5);
    // a.getData();

    //!return object b;
    b.setData(20).getData();
         
    return 0;
}