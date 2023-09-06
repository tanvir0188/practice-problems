#include<iostream>
// 1. System header files: It comes with the compliler
using namespace std;
// 2. user defined header files: It is written by the programmer
// #include "this.h" --> this will produce an error if this.h isn't present in the current directory
int main(){
    int a=4, b=5;
    cout<< "operators in c++"<< endl;
    cout<< " Following are the types of operators in c++"<<endl;
    //Arithmetic operators
    cout<< "The value of a+b is " << a+b<<endl;
    cout<< "the value of a-b is "<< a-b<< endl;
    cout<< "the value of a*b is "<< a*b<< endl;
    cout<< "the value of a/b is "<< a/b<< endl;
    cout<< "the value of a%b is "<< a%b<< endl;
    cout<< "the value of a++ is "<< a++<< endl;
    cout<<"a="<<a<<endl;
    cout<< "the value of a-- is "<< a--<< endl;
    cout<<"a="<<a<<endl;
    cout<< "the value of ++a is "<< ++a<< endl;
    cout<<"a="<<a<<endl;
    cout<< "the value of --a is "<< --a<< endl; 
    cout<<"a="<<a<<endl;
    //Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';
    //comparison operators
    cout<< "FOllowing are the comparison operators"; 
    cout<< "The value of a == b is"<<(a==b)<<endl;
    cout<< "the value of a!=b is "<< (a!=b)<<endl;
    cout<< "the value of a>b is "<< (a>b)<<endl;
    cout<< "the value of a<b is "<< (a<b)<<endl;
    cout<< "the value of a<=b is "<< (a<=b)<<endl;
    cout<< "the value of a>=b is "<< (a>=b)<<endl;
    cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a==b) && (a<b)) is "<<(!(a==b) && (a<b))<<endl;
    
}