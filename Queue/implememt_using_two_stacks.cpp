#include <stack>
using namespace std;
//? https://leetcode.com/problems/implement-queue-using-stacks/description/
class MyQueue
{
public:
    stack<int> s1, s2;
    MyQueue()
    {
    }

    void push(int x)
    {
        s2.push(x);
    }

    int pop()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        int v = s1.top();
        s1.pop();
        return v;
    }

    int peek()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        return s1.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};
