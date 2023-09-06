#include<iostream>
using namespace std;
int main(){
    int num1, num2, limit1,limit2;
    cout<<"1st Number: ";
    cin>>num1;
    cout<<"2nd Number: ";
    cin>>num2;
    limit1 =100-num1;
    limit2 = 100-num2;
    if(limit1>limit2){
        cout<<"The closest to 100 is: "<<num2;
    }
    else if(limit2>limit1){
        cout<<"The closest to 100 is: "<<num1;
    }
    else{
        cout<<"Both are equal";
    }
    

}