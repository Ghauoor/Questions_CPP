#include <bits/stdc++.h>
using namespace std;
//! https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=0

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }

    int top = myStack.top();
    myStack.pop();
    pushAtBottom(myStack, x);
    myStack.push(top);
    return myStack;
}
