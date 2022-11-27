#include <iostream>
#include <cstring>

using namespace std;

class Human
{

private: // Access Modifiers
    // Properties
    int health;

public:
    char level;
    char *name;
    // Contructor
    Human()
    {
        cout << "Constructor Called" << endl;
        name = new char[100];
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
        cout << endl;

        cout << "[ Name : " << this->name << endl;
        cout << "Level : " << this->level << endl;
        cout << "Health : " << this->health << " ]";
        cout << endl
             << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};