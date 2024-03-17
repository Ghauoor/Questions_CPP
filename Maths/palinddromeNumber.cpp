#include <bits/stdc++.h>

using namespace std;

bool palindrome(int n)
{
    int duplicate = n;
    int reverseNumber = 0;
    while (n > 0)
    {
        int lD = n % 10;
        reverseNumber = (reverseNumber * 10) + lD;
        n = n / 10;
    }

    if (reverseNumber == duplicate)
    {
        return true;
    }
    else
    {
        return false;
    }
}

