#include <bits/stdc++.h>

using namespace std;

void solve(stack<int> &s, int count, int sizeOfStack)
{
    //* base condition
    if (count == sizeOfStack / 2)
    {
        s.pop();
        return;
    }
    
    //* store the top element
    int num = s.top();
    s.pop();

    //* recursive call
    solve(s, count + 1, sizeOfStack);
    s.push(num);
}

void deleteMid(stack<int> &s, int sizeOfStack)
{
    int count = 0;
    solve(s, count, sizeOfStack);
}