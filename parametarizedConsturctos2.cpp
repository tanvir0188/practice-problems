#include<iostream>
#include<cmath>
using namespace std;

class point{

    int a, b;
    friend distance(point, point);
    public:
    point(int x, int y){
        a = x;
        b=y;
    }
    void displayPoint(){
        cout<<"the point is ("<<a<<", "<<b<<")"<<endl;
    }
};

distance(point p1, point p2){
    float dis;
    dis= sqrt(pow((p1.a-p2.a), 2)+pow((p1.b-p2.b), 2));
    cout<<"distance of the two points "<<dis;
}

int main(){

    point p(1, 1);
    p.displayPoint();

    point q(1, 1);
    q.displayPoint();

    distance(p, q);
}