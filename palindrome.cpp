#include<iostream>
using namespace std;

// string isPalindrome(string s){
//     for(int i =0; i<s.size();i++){
//         if (s[i]==s[s.size()-i-1])
//         {
//             return "is palindrome";
//         }
//         else
//         {
//             return "not palindrome";
//         }     
//     }
// }

int main(){
    string word;
    int flag;
    cout<<"enter the word: ";
    cin>>word;
    for(int i =0; i<word.size();i++){
        if (word[i]==word[word.size()-i-1])
        {
            flag =1;
        }
        else
        {
            flag=0;
        }     
    }
    if (flag==1)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
}