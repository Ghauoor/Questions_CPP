#include <bits/stdc++.h>

using namespace std;

bool isValid(string str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        //* if opening bracket ---> push to stack
        //* if closing bracket ---> check and pop

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            //*Stack might be empty
            if (!s.empty())
            {
                char top = s.top();

                //? check for closing brackets
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    
    if (s.empty())
        return true;
    else
        return false;
}