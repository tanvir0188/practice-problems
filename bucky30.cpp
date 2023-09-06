#include<iostream>
using namespace std;

void printNumber(int x){
    cout<< "printing integer: "<<x<<endl;

}

void printNumber(float x){
    cout<<"printing floating value: "<< x<< endl;
}

int main(){
    int a = 54;
    float b= 32.4896;
    printNumber(a);
    printNumber(b);
}