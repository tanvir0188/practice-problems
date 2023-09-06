#include<iostream>
using namespace std;
int sum(int m, int n){
    int c;
    if(m==n){
        c=3*(m+n);
    }
    else{
        c=m+n;
    }
    return c;
}
int main(){
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1;
    cin>>num2;
    cout<<"Result: "<<sum(num1, num2);
}