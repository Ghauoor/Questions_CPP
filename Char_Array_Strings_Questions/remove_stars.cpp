#include <bits/stdc++.h>

using namespace std;

// https://leetcode.com/problems/removing-stars-from-a-string/description/

string removeStars(string s)
{
    string res;
    for (char ch : s)
    {
        if (ch == '*')
        {
            res.pop_back();
        }
        else
        {
            res += ch;
        }
    }
    return res;
}
