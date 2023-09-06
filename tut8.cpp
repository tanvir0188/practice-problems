#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a=34;
    // cout<<"the value of a was: "<<a<<endl;
    // a=45;
    // cout<<"the value of a is: "<<a<<endl;
    //constants in c++
    // const  int a= 3;
    // cout<< "value of a: "<<a<<endl;
    // a=0;//gets an error since a is declared as a constant;
    // cout<<a;
    // int a=2, b=78, c=1233;
    // cout<<"values without setw()"<<endl;
    // cout << "the value of a is: "<<a<<endl;
    // cout << "the value of b is: "<<b<<endl;
    // cout << "the value of c is: "<<c<<endl;
    // cout<< "values with setw()"<<endl;//right justifying manipulator 
    // cout << "the value of a is: "<<setw(4)<<a<<endl;
    // cout << "the value of b is: "<<setw(4)<<b<<endl;
    // cout << "the value of c is: "<<setw(4)<<c<<endl;

    //operator precedence
    //go to c++ operator precedence
    int a=3, b=4;
    int c= (a*5)+b;
    cout<<c<<endl;
    c= ((((a*5)+b)-45)+87);//left to right associativity if the precedence is same
    cout<<c;


    
}