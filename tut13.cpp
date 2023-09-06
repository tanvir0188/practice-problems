#include<iostream>
using namespace std;
int main(){
    int marks[]={23, 45, 56, 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //changing the value of mark is possible.
    marks[2]=444;
    cout<<marks[2]<<endl;
    
    cout<<marks[3]<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the value of marks["<<i<< "] is "<<marks[i]<<endl;

    // }
    int i=0;
    while(i<4){
        cout<<"the value of marks["<<i<< "] is "<<marks[i]<<endl;
        i++;
    }
    
    //pointers and arrays
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
}