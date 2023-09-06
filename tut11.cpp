#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 30; i++)
    {
        
        if(i==2){
            continue;//skips 2. using break means breaking the loop5
        }
        cout<<i<<endl;
    }
    
}