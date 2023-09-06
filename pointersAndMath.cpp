#include<iostream>
using namespace std;
int main(){
    
    int bucky[5];
    int *b0=&bucky[0];
    int *b1=&bucky[1];
    int *b2=&bucky[2];
    
    cout<<"b0 is at "<<b0<<endl;
    cout<<"b1 is at "<<b1<<endl;
    cout<<"b2 is at "<<b2<<endl;

    //it's changing the element it's pointing to
    //Means it's changing the memory address
    b0+=2;
    cout<<"b0 is now at "<<b0<<endl;
}