#include<iostream>
using namespace std;

void passByValue(int x){
    x=99;
}

void passByReference(int *x){
    *x=66; 
}

int main(){
    int a = 13;
    int b = 13;

    passByValue(a);
    passByReference(&b);

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

}

