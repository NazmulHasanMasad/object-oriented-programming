#include <iostream>

using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << " default constructor" << endl;
    }

    //  parameterised constructor
    student(string s, int a, bool g)
    {

        cout << " Paramtrised constructor " << endl;
        name = s;
        age = a;
        gender = g;
    }

    ~student()
    {
        cout << "destructor  called" << endl;
    }

    student(student &a)
    {
        cout << " copy constructor " << endl;

        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name :";
        cout << name << endl;
        cout << "Age :";
        cout << age << endl;
        cout << "gender :";
        cout << gender << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    /*student arr[3];

    for (int i = 0; i < 3; i++)
    {
        string s;
        cout << "Name :";
        cin >> s;
        arr[i].setName(s);

        cout << "age :";
        cin >> arr[i].age;
        cout << "gender :";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
   */

    student a("Ajal", 27, 1);
    // a.printInfo();
    student b;
    student c = a;

    if (b == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }

    return 0;
}