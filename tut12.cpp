#include<iostream>
using namespace std;
int main(){
    //What is a pointer? --> data type which holds the address of otherdata types
    int a=3;
    int * b = &a;
    //& --> address of operator
    // * --> dereference operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The value at address b is "<<*b<<endl;
    //pointer to pointer
    int** c =&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of c is"<<&c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;
}