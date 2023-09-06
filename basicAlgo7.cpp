#include<iostream>
using namespace std;
string exchange(string wrd){
    char temp;
    temp = wrd[0];
    wrd[0]=wrd[(wrd.size()-1)];
    wrd[(wrd.size()-1)]=temp;
    return wrd;
}
int main(){
    string word;
    cout<<"Enter the word: ";
    cin>>word;
    cout<<"Modified word: "<<exchange(word);

}