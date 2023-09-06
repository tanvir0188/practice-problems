#include<iostream>
using namespace std;

class Employee
{
private:
    int i   m
    d;
    static int count;//the value is by default 0, can't declare the value here.
    
public:
    setData(void);
    getData(void);
    static void getCount(void);
};

Employee::setData(void)
{
    cout<<"Id = ";
    cin>>id;
    count++;
}

Employee::getData(void)
{
    cout<<"employee id: "<<id<<endl;
    cout<<"number of employee "<<count<<endl;
}

//static function
void Employee::getCount(void)
{
    cout<<"the value of count is "<<count<<endl;
}

int Employee:: count;
//default value is 0, we have to declare the value here. Such as,
//int Employee:: count=100;

int main(){
    Employee arnob, kawsar, john;

    

    arnob.setData();
    arnob.getData();
    Employee::getCount();//static member function

    kawsar.setData();
    kawsar.getData();
    Employee::getCount();

    john.setData();
    john.getData();
    Employee::getCount();

}