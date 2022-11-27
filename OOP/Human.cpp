#include <iostream>

using namespace std;

class Human
{

private: // Access Modifiers
    // Properties
    int health;

public:
    char level;

    // Contrutor
    Human()
    {
        cout << "Constructor Called" << endl;
    }

    // Perameterized Constructor

    Human(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Human(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy Constructor

    Human(Human &anyName)
    {
        this->health = anyName.health;
        this->level = anyName.level;
    }

    // Behaviour
    void print()
    {
        cout << "Copy Constructor Called" << endl;
        cout << this->level << endl;
        cout << this->health << endl;
    }

    // Getter Setter

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};