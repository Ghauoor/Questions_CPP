#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "The animal makes a sound" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Animal *animal1 = new Cat();
    Animal *animal2 = new Dog();

    animal1->makeSound(); // Output: Meow!
    animal2->makeSound(); // Output: Woof!

    delete animal1;
    delete animal2;
    return 0;
}
