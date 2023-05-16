#include <iostream>
using namespace std;

void celebrateBirthday(int *age)
{
    (*age)++;
    cout << "YEAH, Celebrate it " << *age << ". birthday" << endl;
}

int main(int argc, char const *argv[])
{
    int myAge = 12;
    cout << "Before Function " << myAge << endl;
    celebrateBirthday(&myAge);
    cout << "After Function " << myAge << endl;

    return 0;
}


