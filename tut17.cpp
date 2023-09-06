#include<iostream>
using namespace std;
//dont use inline function during recursion
inline int product(int a, int b){
    //static int c = 0; //--> this executes only once . can't be using in inline function
    int c = a*b;//Next time this function is run, the value of c will be retined
    return c;
}
//default value has to be declared at the extreme right.
float moneyReceived(int currentMoney, float factor =1.04){//Here factor has default value 1.04
    return currentMoney*factor;
}

int strlen(const char *p)

int main(){
    int a, b;
    int money;
    // cout<<"Enter the value of a and b ";
    // cin>>a>>b;

    //cout<<"product:  "<<product(a, b);
    cout<<"Enter the amount: ";
    cin>>money;
    cout<<"money received: "<<moneyReceived(money);
}