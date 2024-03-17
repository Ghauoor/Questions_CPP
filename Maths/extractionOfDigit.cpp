#include <bits/stdc++.h>
using namespace std;

// module with 10 to get last digit
// divion by 10

void extractAllDigit(int N)
{
    while (N > 0)
    {
        int lastDigit = N % 10;
        N = N / 10;
        cout << lastDigit;
    }
}
int main(int argc, char const *argv[])
{
    extractAllDigit(1234);
    return 0;
}
