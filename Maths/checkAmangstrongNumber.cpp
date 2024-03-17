#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int count = 0; // Initialize count to 0
    while (n > 0)
    {
        int lD = n % 10;
        count = count + 1;
        n = n / 10;
    }

    return count;
}

bool checkArmstrong(int n)
{

    int sum = 0;
    int duplicate = n;
    int cntDigit = countDigit(n);

    while (n > 0)
    {
        int lD = n % 10;
        sum = sum + pow(lD, cntDigit);
        n = n / 10;
    }

    if (sum == duplicate)
    {
        return true;
    }
    else
    {
        return false;
    }
}
