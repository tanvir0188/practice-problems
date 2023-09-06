#include<iostream>
using namespace std;


int main(){
    string s= "*";
    int row, column;

    cout<<"enter the row and column: ";
    cin>>row>>column;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<s;
        }
        cout<<endl;       
        
    }
    
}