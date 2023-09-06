#include<iostream>
using namespace std;
int main(){
    int age;
    int totalAge=0;
    int numOfPeople=0;
    cout<<"Enter first persons age or -1 to quit: ";
    cin>>age;
    while (age!=-1)
    {
        totalAge=age+totalAge;
        numOfPeople++;
        cout<<"Enter the age of next person: ";
        cin>>age;
    }
    cout<<"Number of people entered: "<<numOfPeople<<endl;
    cout<<"total age: "<<totalAge<<endl;
    cout<<"average age: "<<(totalAge/numOfPeople);
}