#include <iostream>
#include <vector>
using namespace std; 

void Display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
        cout<<endl;
}

int main() {
    vector<int> vec1;
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    int ele;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element to add to this vector ";
        cin>>ele;
        vec1.push_back(ele);
    }
    Display(vec1);
    
    return 0;
}