#include <iostream>
using namespace std;

class Emp{
    int id;
    int salary;
    public:
     void setData(void){
        cout<<"Enter id for Employee "<<endl;
        salary=120;
        cin>>id;
     }
     void getData(void){
        cout<<"Employee id is "<<id<<" and salary is "<<salary<<endl;
     }

};

int main() {
    // Emp a,b,c;
        // a.setData();
        // a.getData();

        // b.setData();
        // b.getData();

        // c.setData();
        // c.getData();
    Emp fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setData();
    }
    
    for (int i = 0; i < 4; i++)
    {
        fb[i].getData();
    }
    
    return 0;
}