#include<iostream>
using namespace std;
int main(){
    string word, word2;
    char a;
    cin>>word;
    a= word[word.size()-1];
    word2= a+word+a;
    cout<<word2;
}