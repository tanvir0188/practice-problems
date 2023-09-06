#include <iostream>
using namespace std;
int global= 6;
void sum(){
    cout<<"\n global variable from function ="<< global;
}
int main(){
    int a= 10;
    int b = 30;
    float pie = 3.1416;
    char c = 'u';
    int global = 7;
    cout<< "here the value of a is:"<<a<<" the value of b = "<<b;
    cout << "\n The value of pie is:"<< pie<< "\n the value of c is "<<c;
    cout<< "\nglobal variable: "<<global;
    sum();
    cout<< "\nglobal variable: "<<global;
}
