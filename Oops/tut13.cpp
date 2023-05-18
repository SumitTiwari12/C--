#include <iostream>
using namespace std; 

class BankDposite{
    int principal;
    int year;
    float intersRate;
    float returnValue;
    public:
    BankDposite(){};
    BankDposite(int p,int y, float r);
    BankDposite(int p,int y, int r);
    void show(void);

};

BankDposite::BankDposite(int p,int y, float r){
    principal=p;
    year=y;
    intersRate=r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue*=(1+intersRate);
    }
    
}

BankDposite::BankDposite(int p,int y, int r){
    principal=p;
    year=y;
    intersRate=float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue*=(1+intersRate);
    }
    
}

void BankDposite::show(void){
    cout<<endl<<"Principal amount was "<<principal<<endl<< "Return value after "<<year<<" is "<<returnValue<<endl;
}

int main() {

    BankDposite b1,b2;

    int p,y,R;
    float r;
    
    cout<<"Enter the value p,y and r"<<endl;
    cin>>p>>y>>r;
    b1 = BankDposite(p,y,r);
    b1.show();

    cout<<"Enter the value p,y and R"<<endl;
    cin>>p>>y>>R;
    b2 = BankDposite(p,y,R);
    b2.show();
    
    return 0;
}