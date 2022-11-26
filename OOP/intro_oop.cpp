#include <iostream>
#include "Human.cpp"

using namespace std;

int main()
{
    // static allocation
    Human h;

    // dynamic allocation
    Human *human = new Human;

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