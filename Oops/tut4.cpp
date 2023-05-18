#include <iostream>
using namespace std; 

class Empolyee{
    int id;
    int count;
        public:
         void setData(void){
            cin>>id;
        }
    void getdata(void){
        cout<<"The id of Empolyee "<<id;
    }
};

int main() {
    
    Empolyee a;
    a.setData();
    a.getdata();

    return 0;
}