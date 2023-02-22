void pushAtBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }

    int top = s.top();
    s.pop();
    pushAtBottom(s, data);
    s.push(top);
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
        return;

    int top = stack.top();
    stack.pop();
    reverseStack(stack);
    pushAtBottom(stack, top);
}
