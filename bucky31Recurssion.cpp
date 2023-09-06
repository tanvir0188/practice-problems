#include<iostream>
using namespace std;

//factorial 
int factorialFinder(int x){
    if (x==1)
    {
        return 1;
    }
    else
    {
        return x*factorialFinder(x-1);
    }
    
    
}

int main(){
    cout<<factorialFinder(5);
}