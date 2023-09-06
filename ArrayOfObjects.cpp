#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void);
        void getId(void);
        
};

int main(){
    Employee matadorz[15];
    int option;

    cout<<"1st member ";

    matadorz[0].setId();
    matadorz[0].getId();

    cout<<"Continue?"<<endl;
    cout<<"1. yes"<<endl<<"2. no"<<endl<<"option:";

    cin>>option;
    if (option==2)
    {
        exit(0);
    }
    
    else

    for (int i = 1; i < 15; i++)
    {
              
        matadorz[i].setId();
        matadorz[i].getId();

        cout<<"Continue?"<<endl;
        cout<<"1. yes"<<endl<<"2. no"<<endl<<"option:"<<endl;
        cin>>option;
        if (option==2)
        {
            break;
        }
                
    }
    
    
    

}

void Employee::setId(void)
{
    cout<<"Id: ";
    cin>>id;
   
}

void Employee::getId(void)
{
    cout<<"printing the ID: "<<id<<endl;
}
