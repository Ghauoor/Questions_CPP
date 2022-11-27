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
    static int timeToComplete;
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

    Human(Human &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Destructor
    ~Human()
    {
        cout << "Destructor Call" << endl;
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

    static int staticMethod()
    {
        cout << "Static Method is Called " << endl;
        return timeToComplete;
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