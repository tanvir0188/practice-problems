#include<iostream>
using namespace std;
int main(){
int pos;
string word;
cout<<"Enter the word: ";
cin>> word;
cout<<"Enter the position: ";
cin>>pos;
word[pos]=NULL;
cout<<word;
}