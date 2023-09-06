#include<iostream>
using namespace std;

int volume(int l=1, int w=2, int h=1);//defaults the values;

int main(){
    cout<<volume(5);
}

int volume(int l, int w, int h){
        return l*w*h;
    }