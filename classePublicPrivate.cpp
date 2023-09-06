 #include<iostream>
 using namespace std;

 class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
    void setData(int a1, int b1,int c1);
    void getData();
 };



 int main(){
    Employee harry;
    // harry.a = 12;-->since private, it won't get printed
    harry.d= 39;
    //here we have to call the function of Employee class to change privated data

    harry.setData(1, 2, 4);
    harry.getData();
 }

 void Employee::setData(int a1, int b1, int c1)
 {
    a=a1;
    b=b1;
    c=c1;
 }

 void Employee ::getData()
 {
    cout<<"the value of a is "<< a<<endl;
    cout<<"the value of b is "<< b<<endl;
    cout<<"the value of c is "<< c<<endl;
    cout<<"the value of d is "<< d<<endl;
    cout<<"the value of e is "<< e<<endl;
 }
