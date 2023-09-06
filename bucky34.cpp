#include<iostream>
using namespace std;
int main(){
     int arr[5]={12, 23, 34, 4, 22};
     int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    cout<<"sum is "<<sum;
}