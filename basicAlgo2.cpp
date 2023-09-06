#include<iostream>
using namespace std;
int difference(int n){
    int dif;
    if(n>51){
        dif= 3*(n-51);
    }
    else{
        dif = 51 -n;
    }
    return dif;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Result: "<<difference(n);
}