#include<iostream>
using namespace std;


int main(){
    int matrix[3][3];

    cout<<"enter the matrix"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];        
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j];
            
        }
        cout<<endl;
        
    }

    cout<<matrix[0][2];
    
}