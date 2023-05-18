// Virtual Base Class in C++ Part 2


#include <iostream>
using namespace std; 

class Student{
    protected:
        int roll_no;
    public:
        void set_roll_number(int a){
            roll_no = a;

        }
        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test : public  virtual Student{
    protected:
        float math, physics;
    public:
        void set_marks(float m1, float m2){
            math=m1;
            physics=m2;
        }
        
        void print_marks(void){
            cout << "You result is here: "<<endl
             << "Maths: "<< math<<endl
            << "Physics: "<< physics<<endl;
            }
};

class Sport : public virtual Student{
    protected:
        float score;
        public:
         void set_score(float sc){
            score = sc;
         }
           void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};


class Result : public Test, public Sport{
     private:
        float total;
    public:
        void display(void){
            total = math+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};


int main() {

    Result shivanshu;
    shivanshu.set_roll_number(4200);
    shivanshu.set_marks(78.9, 99.5);
    shivanshu.set_score(9);
    shivanshu.display();
    
    return 0;
}