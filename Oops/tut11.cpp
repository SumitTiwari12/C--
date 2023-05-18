#include <iostream>
#include<math.h>
using namespace std; 

class point{
    int x,y;
    friend double distance(point a1, point a2);
    public:
    point(int p1,int p2);
     void printPoint(void);
};

point::point(int p1,int p2){
    x = p1;
    y = p2;
}

void point::printPoint(void){
    cout<<"The Point is ("<<x<<","<<y<<")"<<endl;
}

double distance(point a1, point a2){
    double a = sqrt(pow(a2.x-a1.x,2) +  pow(a2.y-a1.y,2));
    return a;
    
}

int main() {
    point p1(5,6);
    point p2(6,7);
    p1.printPoint();
    p2.printPoint();

    cout<<"The Distance between x and y codenated"<<endl;
    double d1 = distance(p1,p2);
    cout<<"The distance between p1 and p2 is: "<<d1<<endl;

    return 0;
}