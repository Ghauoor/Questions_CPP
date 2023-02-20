#include <iostream>
using namespace std;
/**
 * class Test
{
    // x is private
    int x;
};

int main()
{
    Test t;
    t.x = 20; // compiler error because x
              // is private

    return t.x;
}

*/

// members of a structure are public
// by default.
#include <iostream>

struct Test
{
    // x is public
    int x;
};

int main()
{
    Test t;
    t.x = 20;

    // works fine because x is public
    std::cout << t.x;
}

// C++ program to demonstrate
// inheritance with structures.
#include <iostream>
using namespace std;

struct Base
{
public:
    int x;
};

// is equivalent to
// struct Derived : public Base {}
struct Derived : Base
{
public:
    int y;
};

int main()
{
    Derived d;

    // Works fine because inheritance
    // is public.
    d.x = 20;
    cout << d.x;
    cin.get();
    return 0;
}
