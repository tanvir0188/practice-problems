#include<iostream>
using namespace std;

struct employee
{
    int id;
    char favChar[10];
    float salary;
};
// typedef struct employee
// {
//     int id;
//     char favChar[5];
//     float salary;
// }ep;
//struct employee can be written as ep harry

union money //for better memory management
{
    int rice; //4 bit
    char car; //1 bit
    float pounds; //4 bit
};

int main(){
    struct employee Harry;
    union money m1;
    m1.rice = 45;
    // m1.car = 'c'; here only one of them can be used. if we take all the values 
    //then garbage values will be given
    // m1.pounds = 3.23;
    cout<<m1.rice<<endl;




    // Harry.id= 2;
    // Harry.favChar[0]='S';
    // Harry.favChar[1]='u';
    // Harry.favChar[2]='p';
    // Harry.favChar[3]='e';
    // Harry.favChar[4]='r';
    // Harry.salary=20000;
    // cout<< Harry.salary<<endl;
    // for(int i =0; i<5;i++){
    //     cout<<Harry.favChar[i];
    // }
    // cout<<endl;
    // cout<<Harry.id<<endl;



    enum meal{breakfast, lunch, dinner};
    meal M1=breakfast;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<< dinner<<endl;
    cout<<M1;
    


}