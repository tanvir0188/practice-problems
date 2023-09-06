#include <iostream>
using namespace std;
int c=45;
int main(){
    //*********Built in Data types********
    int a, b, c;
    // cout<< "Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"sum of a and is "<< c<<endl;
    // cout<<"the global value of c is "<<::c;
    //*********float, double, and long ouble literals********
    // float d=34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4 is :"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is :"<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is :"<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is :"<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is :"<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    //*********Reference Variables********
    // Arnob--> Arnob--> Tanvir --> kutta--> abal
    // float x=455;
    // float &y = x;
    // cout<<y<<endl;
    //*********Typecasting********
    int z = 45;
    float m= 45.45;
    cout<<"The value of a is "<<(float)z<<endl;
    // cout<<"The integer value of m is "<<(int)m;
    int e = int(m);
    cout<<"e="<<e<<endl;
    cout<<"The value of z+m="<<z+m<<endl;
    cout<<"The value of z+(int)m="<<z+int(m)<<endl;

}