#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

//This will not swap a and b. so pointer will be needed
void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
}
//Call by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Call by reference using pointers
void swapReferenceVar(int &a, int &b){// here a and b will point the values in main function
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=4, b=5;
    //cout<<sum(4,5);
    swap(a, b);//--> here actual value will get copied
    cout<<a<< endl;
    cout<<"Using call by pointer reference"<<endl;
    swapPointer(&a, &b);
    cout<<a<<" and "<<b<<endl;

    int x= 50, y= 60;
    cout<<"Using call by reference variables"<<endl;
    swapReferenceVar(x, y);
    cout<<x<<" and "<<y;
}