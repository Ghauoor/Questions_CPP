#include <bits/stdc++.h>

using namespace std;
//! https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
int findMinimumCost(string str)
{
    //* odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
            s.push(ch);
        else
        {
            //* ch is closed brace
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    //* stack contains invalid expression
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}