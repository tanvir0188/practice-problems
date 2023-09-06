#include<iostream>
using namespace std;

class complex{

    int a, b;
    public:
    //creating a constructor
    //constructor is a special member function with same name as
    // of the class. 
    //It is automatically invoked whenever an objec is created.
    // it is used to  initializ the objects of its class
    complex(void);//constructor declaration
    void printData(void);    

};

complex::complex(void){
    a=10;
    b=0;
}

void complex::printData(void)
{
    cout<<"Here the value is: "<<a<<", "<<b<<endl;
}

int main(){
    complex c1, c2, c3;
    c1.printData();
    c2.printData();
    c3.printData();
}
/*
properties of consturctors
1. It should be declared in the public section of the class
2. they are automatically invoked whenever the objec is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We canno refer to their address
*/