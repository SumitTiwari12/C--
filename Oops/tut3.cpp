#include <iostream>
using namespace std; 

class Shop{
    private:
        int itemId[100];
        int itemPrice[100];
        int counter;
    public: 
        void initCounter(void){counter = 0;}
        void setData(void);
        void getData(void);
};

void Shop :: setData(void){
    cout<<"Enter Id of your item  no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Id  of your item "<<counter+1<<" Price"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: getData(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}



int main() {

    Shop e;
    e.initCounter();
    e.setData();
    e.setData();
    e.setData();
    e.getData();
    return 0;
}