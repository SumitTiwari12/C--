// Virtual Base Class in C++  Part-1

#include <iostream>
using namespace std;

class A{
    public:
        void say(){
            cout<<"Hello World"<<endl;

        }
};

class B : public virtual A{

};

class C : public virtual A{

};

class D: public B, public C{

};


int main() {
    
    A a1;
    a1.say();
    B b1;
    b1.say();

    D d1;
    d1.say();


    return 0;
}

// Virtual Base Class Example Diagram  search google click image
// \media\videoSeriesFiles\courseFiles\cpp-tutorials-in-hindi-44\Virtual_Base_Class_Example_Diagram.PNG