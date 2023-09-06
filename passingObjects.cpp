#include<iostream>
using namespace std;

class complex
{
private:
    int a, b;
public:
    void setData(int v1, int v2){
        a= v1;
        b= v2;
    }

    void setDataBySum(complex c1, complex c2){
        a= c1.a+ c2.a;
        b= c1.b + c2.b;
    }

    friend complex sumComplex(complex sc1, complex sc2); //it gives the written permission to access data    

    void printComplex(void){
        cout<<"Complex number: "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex sumComplex(complex sc1, complex sc2){
        complex sc3;
        sc3.setData(sc1.a+ sc2.a, sc1.b+ sc2.b);
        sc3.printComplex();
        // return sc3;
    }




int main(){

    complex a, b, c;

    a.setData(2, 3);
    a.printComplex();

    b.setData(3, 4);
    b.printComplex();

    // c.setDataBySum(a, b);
    // c.printComplex();
    sumComplex(a, b);
    

}