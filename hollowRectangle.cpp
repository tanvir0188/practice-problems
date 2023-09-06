#include<iostream>
using namespace std;


int main(){
    int row, column;

    cout<<"row: ";
    cin>>row;
    cout<<"column: ";
    cin>>column;

    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < column; j++)
        {
            if ((i==0)||(i==row-1)||(j==column-1)||(j==0))
            {
                cout<<"*";
            }

            else{
            cout<<" ";  
            }         
            

        }
        cout<<endl;
          
        
    }
    

}