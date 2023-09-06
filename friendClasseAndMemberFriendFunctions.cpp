#include<iostream>
using namespace std;

//Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b){
        return (a+b);
    }

    int sumComplex(complex , complex);

};

class complex
{
    int a, b;
    //inividually declaring functions as friends
    friend int calculator::sumComplex(complex o1, complex o2);//declaring another class's funciton as friend
    //we can also declare the whole class as calculator
    //friend class calculator;
public:
    void setData(int v1, int v2){
        a= v1;
        b= v2;
    }

    void printComplex(void){
        cout<<"Complex number: "<<a<<" + "<<b<<"i"<<endl;
    }

};

int calculator::sumComplex(complex o1, complex o2){ 
        return (o1.a+o2.a);
    }


int main(){

    complex o1, o2;
    calculator calc;

    o1.setData(5, 7);
    o1.printComplex();

    o2.setData(3, 6);
    o2.printComplex();

    int res = calc.sumComplex(o1, o2);
    cout<<"The sum of o1 and o2 "<<res<<endl;

}