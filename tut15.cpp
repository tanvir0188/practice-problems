#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

//Function prototype
//type function-name(arguments);
int sum(int a, int b);// acceptable
//int sum(int a, b);-->not acceptable

int main(){
    int num1, num2;
    cout<<"1st Number:";
    cin>>num1;
    cout<<endl;
    cout<<"2nd Number:";
    cin>>num2;
    cout<<endl;
    cout<<"Sumation: "<<sum(num1,num2);
}