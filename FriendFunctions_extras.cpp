#include<iostream>
using namespace std;

class y;

class x{
    int data;
    public:
        void setData(int value){
            data=value;
        }
    friend void add(x, y);// giving the access to private data to the function
};

class y{
    int num;
    public:
    void setValue(int value){
        num=value;
    }
    friend void add(x, y);
};

void add(x o1, y o2){
    cout<<"sum of x and y objectes: "<<o1.data+o2.num;
}

int main(){
    x a;
    a.setData(3);

    y b;
    b.setValue(5);

    add(a, b);
}   