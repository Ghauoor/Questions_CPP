#include <iostream>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << " Speaking " << endl;
    }
};

class Dog : public Animal
{
};

class Huskey : public Dog
{

};

int main()
{
    Huskey huskey;
    huskey.speak();
}