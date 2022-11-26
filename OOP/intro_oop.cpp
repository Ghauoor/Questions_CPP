#include <iostream>
#include "Human.cpp"

using namespace std;

int main()
{
    // static allocation
    Human h;
    cout << "Level is : " << h.getLevel() << endl;
    cout << "Health is : " << h.getHealth() << endl;

    cout << endl;

    // dynamic allocation
    Human *human = new Human;
    cout << "Level is : " << (*human).getLevel() << endl;
    cout << "Health is : " << (*human).getHealth() << endl;

    /*
     // create obj
     Human naruto;
     //  naruto.health = 70;
     //  naruto.level = 'A';
     //Use Getter Setter
     naruto.setHealth(70);
     cout << "Naruto Health is " << naruto.getHealth() << endl;
     cout << "Size of HUMAN class is: " << sizeof(naruto);
     */

    return 0;
}