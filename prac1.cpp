#include<iostream>
#include<math.h>
using namespace std;
int areaOfRectangle( int height, int width){
    int area = height*width;
    return area;
}

int perimeterOfRectangle( int height, int width){
    int area = 2*(height+width);
    return area;
}

double areaOfTriangle(int a, int b, int c){
    int s = a+b+c;
    double area = sqrt(( s * (s-a) * (s-b) * (s-c)));
    return area;
}

int main(){
    int option;
    int h, w;
    int a, b, c;
    cout<<"       Choose the option "<<endl;
    cout<<"1. Find the area of a rectangle"<<endl;
    cout<<"2. Find the perimeter of a rectangle"<<endl;
    cout<<"3. Find the area of the triangle"<<endl;
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the width:";
        cin>>w;
        cout<<"Area: "<<areaOfRectangle(h, w);
        break;

    case 2:
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the width:";
        cin>>w;
        cout<<"Perimeter "<<perimeterOfRectangle(h, w);
        break; 
    case 3:
         cout<<"Enter the 1st length: ";
         cin>>a;
         cout<<"Enter the 2nd length: ";
         cin>>b;
         cout<<"Enter the 2nd length: ";
         cin>>c;
         cout<<"Area of the triangle is: "<<areaOfTriangle(a, b, c);

    default:
        break;
    }
}