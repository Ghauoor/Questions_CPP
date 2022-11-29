#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is Sleeping" << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    Male m1;
    cout << m1.height << endl;

    /*
 Male male;
male.setWeight(85);
cout << male.age << endl;
cout << male.weight << endl;
cout << male.height << endl;
cout << male.color << endl;
male.sleep();

*/
}
