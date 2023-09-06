#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

     complex(int x)
    {
        a = x;
        b = 0;
    }

    void printData();

};

void
complex::printData(void)
{
    cout << "Here the value is: " << a << " + " << b << "i" << endl;
}

int main()
{
    complex c1(4, 6);
    c1.printData();

    complex c2(5);
    c2.printData();
}