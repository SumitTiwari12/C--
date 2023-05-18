#include <iostream>
using namespace std; 

class Emp{
    private:
        int a,b,c;

    public:
    int d,f;

        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is => " <<a<<endl;
            cout<<"The value of b is => " <<b<<endl;
            cout<<"The value of c is => " <<c<<endl;
            cout<<"The value of d is => " <<d<<endl;
            cout<<"The value of f is => " <<f<<endl;
        };

};

void Emp::setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
};

int main() {
    Emp Shivanshu;
    // Shivanshu.a = 5 ===> Error because a is private in class can not direct set,access data
    Shivanshu.setData(5,22,89);
    Shivanshu.d = 855;
    Shivanshu.f = 540;
    Shivanshu.getData();
    return 0;
}