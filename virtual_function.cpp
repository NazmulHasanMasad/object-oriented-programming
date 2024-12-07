#include <iostream>

using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "This is the base print" << endl;
    }
    void display()
    {
        cout << "This is the base display" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is the derived  print" << endl;
    }
    void display()
    {
        cout << "This is the derived display" << endl;
    }
};

int main()
{
    base *baseptr;

    derived d;

    baseptr = &d;

    baseptr->display();

    baseptr->print();

    return 0;
}