#include <iostream>

using namespace std;

// Multiple inheritance
class A
{
public:
    void Afunction()
    {
        cout << "inherited A" << endl;
    }
};

class B
{
public:
    void Bfunction()
    {
        cout << "inherited B" << endl;
    }
};

class C : public A, public B
{
public:
};

// multilevel inheritance
class D
{
public:
    void Dunction()
    {
        cout << "inherited D" << endl;
    }
};

class F : public D
{
public:
    void Ffunction()
    {
        cout << "inherited F" << endl;
    }
};
class G : public F
{
public:
};

int main()
{
    C c;
    c.Afunction();
    c.Bfunction();

    G g;
    g.Dunction();
    g.Ffunction();

    return 0;
}