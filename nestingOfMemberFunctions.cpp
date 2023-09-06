#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        // void display(void);

};

void binary::read(void){
    cout<<"give a binary number: ";
    cin>>s;
}

void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);//-->stops the program before executing any further function
        }
        
    }
    
}

void binary::ones_complement(void)
{   
    cout<<"One's complement of "<<s<<" is ";
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }

        else 
        {
            s.at(i)='0';
        }
        // cout<<s.at(i);    
    }
    cout<<s;
    
}

// void binary::display(void)
// {
//     cout<<"The binary number: ";
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s.at(i);
//     }
//     cout<<endl;
    
// }

int main(){
    binary b;
    b.read();
    b.chk_bin();
    // b.display();
    b.ones_complement();
    // b.display();
}