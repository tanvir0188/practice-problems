#include<iostream>
using namespace std;

class Human
{
private:
    long long int Id;
public:
    int familyMember, age;
    string name, marital_status;


void setData(long long int id1);
void getData();

};

void Human::setData(long long int id1)
{
    Id=id1;
}

void Human::getData()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<Id<<endl;
    cout<<"Family members: "<<familyMember<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Marital Status: "<<marital_status;

}


int main(){

    Human Arnob;
    
    Arnob.name="Arnob Tanvir";
    Arnob.familyMember=7;
    Arnob.age=23;
    Arnob.marital_status="Unmarried";


    Arnob.setData(54216547874);
    Arnob.getData();

}