#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int n)
{
    int revNum = 0;

    while (n > 0)
    {
        int lD = n % 10;
        revNum = (revNum * 10) + lD;
        n = n / 10;
    }

    return revNum;
}

int main()
{
    int n;
    cin >> n;

    cout << reverseNumber(n);
}
