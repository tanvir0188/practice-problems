#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    // cout<<rand();
    for(int n=0 ;n<25;n++){
        cout<<rand()<<endl;
    }
    //to get random numbers in a specific limit
    cout<<"simulation of a dice"<<endl;
    //srand(67);//it just changes random number generator algorithm. but doesn't give a truly random number
    srand(time(0));//gets' the clock so that the seed changes overtime.
    for (int i = 0; i < 20; i++)
    {
        cout<<1+(rand()%6)<<endl;//dice simulation
    }
    
}