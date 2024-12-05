#include <iostream>

using namespace std;

// Fuction overloading

class College
{
public:
    void fun()
    {
        cout << " I am a function with no arguments" << endl;
    }

    void fun(int x)
    {
        cout << "I am a function with int " << endl;
    }

    void fun(double x)
    {
        cout << "I am a function with double " << endl;
    }
};

int main()
{
    College c;
    c.fun();
    c.fun(10);
    c.fun(12.5);

    return 0;
}