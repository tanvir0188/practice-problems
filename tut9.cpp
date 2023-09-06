#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // if(age<18){
    //     cout<<"You can't go in there";
    // }
    // else if(age==18){
    //     cout<<"kid section";
    // }
    // else{
    //     cout<<"Permission granted";
    // }
    //selection control structure: switch case statements;
    switch(age){
        case 18:
            cout<<"You are 18";
            break;
        case 2:
            cout<<"you are 2";
            break;
        default:
            cout<<" No special cases";
            break;
    }

}