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

    friend complex sumComplex(complex sc1, complex sc2); //it gives the written permission to access data    

    void printComplex(void){
        cout<<"Complex number: "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex sumComplex(complex sc1, complex sc2){
        complex sc3;
        sc3.setData(sc1.a+ sc2.a, sc1.b+ sc2.b);
        cout<<"Sum of ";
        sc3.printComplex();
        // return sc3;
    }

int main(){

    complex a, b;

    a.setData(2, 3);
    a.printComplex();

    b.setData(3, 4);
    b.printComplex();

    // c.setDataBySum(a, b);
    // c.printComplex();
    sumComplex(a, b);
    

}
/* properties of friend functions
1. not a part of class
2. so, it cannot be called from the object of that class
3. can be invoked without the help of any object
4. usually conains the objects as arguments
5. can be declared inside pyblic or private section of the class
6. it can't access the members directly by their names and need object_name.member_name
to access any member.

*/