#include <iostream>

using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Naruto" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;

        cout << "Hello Naruto" << endl;
    }

    void operator()()
    {
        cout << "main Bracket hu " << this->a << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();
}