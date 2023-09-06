#include<iostream>
using namespace std;

class c2;

class c1{
    int val;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){
            this->val=a;
            
        }

        void display(void){
            cout<< val<< endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    

    public:
        void indata(int a){
            val2 = a;
            
        }

        void display(void){
            cout<< val2<< endl;
        }
};

void exchange(c1 &x, c2 &y){
    int tmp= x.val;
    x.val=y.val2;
    y.val2=tmp;
}

int main(){
    c1 a;
    c2 b;

    a.indata(34);
    b.indata(45);
    exchange(a, b);

    cout<<"Value a after changing:";
    a.display();
    cout<<"value b after changing:";
    b.display();


}