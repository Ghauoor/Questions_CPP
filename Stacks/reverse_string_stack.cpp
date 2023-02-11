#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "Naruto";
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "Answer is " << ans << endl;

    return 0;
}

char *reverse(char *S, int len)
{
    stack<char> s;

    for (int i = 0; i < len; i++)
    {
        s.push(S[i]);
    }

    int j = 0;

    while (!s.empty())
    {
        S[j] = s.top();
        j++;
        s.pop();
    }

    return S;
}