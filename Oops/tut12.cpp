#include <iostream>
using namespace std; 

class num{
    int a,b,c;

    public:
        num(int x, int y,int z=9){
            a=x;
            b=y;
            c = z;
        }
        
        num(int x){
             a=x;
             b=0;
             c=0;
        }

        void print(void){
            cout<<"The value of a:"<<a<<" & b:"<<b<<" & c:"<<c<<endl;
        }
};

int main() {
    num n1(5,4,85);
    num n2(5,4);
    num n3(5);
    n1.print();
    n2.print();
    n3.print();
    return 0;
}