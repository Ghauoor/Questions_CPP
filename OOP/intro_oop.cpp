#include <iostream>
#include "Human.cpp"

using namespace std;

int main()
{
    Human naruto(80, 'A');
    
    /*
    Human naruto(22, 'B');
    naruto.print();

    cout << "Address of Naruto " << &naruto << endl;

    // static allocation
    Human h;
    h.setHealth(90);
    h.setLevel('B');

    cout << "Level is : " << h.getLevel() << endl;
    cout << "Health is : " << h.getHealth() << endl;

    cout << endl;

    // dynamic allocation
    Human *human = new Human;

    human->setLevel('A');
    human->setHealth(80);

    cout << "Level is : " << (*human).getLevel() << endl;
    cout << "Health is : " << (*human).getHealth() << endl;

    cout << endl;

    // Another way
    cout << "Level is : " << human->getLevel() << endl;
    cout << "Health is : " << human->getHealth() << endl;


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