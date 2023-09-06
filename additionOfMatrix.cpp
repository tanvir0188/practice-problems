#include<iostream>
using namespace std;

int addition(int a[3][3], int b[3][3]){
    int sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j]= a[i][j]+b[i][j];
            
        }


        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<" "<<sum[i][j];
            
        
        }

        cout<<endl;        
    }
    

}

int main(){
    int matrix[3][3], matrix2[3][3];

    cout<<"matrix 1: "<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];
        }
        
    }

    cout<<"matrix 2: "<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix2[i][j];
        }
        
    }

    addition(matrix, matrix2);


}