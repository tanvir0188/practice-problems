#include <iostream>
using namespace std;
int main(){
    /*Loops in c++
    There are 3 types of loops in c++:
    1.For loop,
    2.While loop,
    3.do-while loop    
    */
   //For loop:
   for(int i=1; i<101; i++){
    cout<<i<<endl;
   }

   //While loop:
//    while(condition){
//     c++ statements;
//    }
    // printing 1 to 40 using while loop:
    // int i=0;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }
    
    //DO While loop:
    //syntax:
//    do{
//     c++ statements;
//    }
//    while(condition){
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=40);

}
