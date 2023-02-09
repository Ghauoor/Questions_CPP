#include <bits/stdc++.h>
using namespace std;

class Stack
{
    // Properties
public:
    int *arr;
    int top;
    int size;

    // behaiour
    Stack(int size)
    {
        this->size = size;

        arr = new int[size];
        top = -1;
    }

    // push
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    // pop
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    // Peek
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    // Check stack is empty or not
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.pop();
    st.pop();
    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is Not Empty" << endl;
}
