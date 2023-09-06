#include<iostream>
using namespace std;


int main(){
    int n;

    cin>>n;

    cout<<"left half of the pyramid "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        

        cout<<endl;
    }

    cout<<"inverted half pyramid"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<"half pyramid after 180 degree"<<endl;

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            
            if (j<n-i)
            {
                cout<<" ";
            }
            else
            cout<<"*";
            
            
        }
        cout<<endl;
        
    }
    
    
    
}