#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of people: ";
    cin>>n;
    int trust[n][2];
    cout<<"trust relation"<<endl;
    for(int i=0; i<n;i++){
        for (int j = 0; j < 2; j++)
        {
            cin>>trust[i][j];
            if(trust[i][j]>n){
                cout<<"Number of people exceeded";
                break;
            }
        }        
        
    }

}