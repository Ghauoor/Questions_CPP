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

    // Behaviour
    void print()
    {
        cout << level << endl;
        cout << health << endl;
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