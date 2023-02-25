#include <bits/stdc++.h>

using namespace std;

bool areBracketsBalanced(string s)
{
    int i = -1;
    for (auto &ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
            s[++i] = ch;
        else
        {
            if (i >= 0 && ((s[i] == '(' && ch == ')') || (s[i] == '{' && ch == '}') || (s[i] == '[' && ch == ']')))
                i--;
            else
                return false;
        }
    }
    return i == -1;
}

int main()
{
    string expr = "{()}[]";

    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}