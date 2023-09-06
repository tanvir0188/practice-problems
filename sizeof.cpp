#include<iostream>
using namespace std;
int main(){
    int bucky[10];
    cout<<sizeof(bucky)<<endl;
    cout<<"size of the array: "<<sizeof(bucky)/sizeof(bucky[0]);
}