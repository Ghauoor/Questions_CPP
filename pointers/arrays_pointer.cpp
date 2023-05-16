#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int luckyNumber[5] = {1, 2, 4, 5, 8};
    cout << luckyNumber << endl;
    cout << &luckyNumber[0] << endl;
    cout << luckyNumber[0] << endl;

    int *luckyPointer = luckyNumber;
    cout << "Pointer to " << luckyPointer << ", Value " << *luckyPointer << endl;

    luckyPointer++;
    cout << "Pointer to " << luckyPointer << ", Value " << *luckyPointer << endl;
    return 0;
}
