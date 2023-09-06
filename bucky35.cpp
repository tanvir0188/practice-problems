#include<iostream>
using namespace std;

void printArray(int array[], int length){
    for(int i=0; i<length;i++){
            cout<<array[i]<<endl;
    }
}

int main(){
    int arnob[]= {20, 54, 675};
    int jess[]={54, 24, 7, 8, 9};

    printArray(arnob, 3);
    printArray(jess, 5);
    
}