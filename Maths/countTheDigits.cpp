#include <bits/stdc++.h>

int countDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count = count + 1;
        n = n / 10;
    }

    return count;
}

int countDigitByLog(int n)
{
    int count = (int)(log10(n) + 1);
    return count;
}