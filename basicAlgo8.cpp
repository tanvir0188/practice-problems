#include<iostream>
#include<string.h>
using namespace std;
string copy(string wrd){
    wrd=wrd.substr(0,2) + wrd.substr(0,2) + wrd.substr(0,2)+wrd.substr(0,2);
    return wrd;
}
int main(){
    string word;
    cout<<"Enter The string: ";
    // cin>>word;
    
    

    cout<<copy("Js");
}

//not done yet

