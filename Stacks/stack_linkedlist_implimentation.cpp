#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head;
    int size;

    Stack(int size)
    {
        this->size = size;
        this->head = NULL;
    }

    void push(int data)
    {
        int cnt = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        if (cnt < size)
        {
            // insert at head
            Node *newNode = new Node(data);
            if (head == NULL)
            {
                head = newNode;
                return;
            }
            else
            {
                newNode->next = head;
                head = newNode;
            }
        }
        else
            cout << "Stack Overflow" << endl;
    }
    void peak()
    {
        if (head == NULL)
            cout << "stack is empty" << endl;
        else
        {
            cout << head->data << endl;
        }
    }

    void pop()
    {
        if (head == NULL)
            cout << "Stack underflow" << endl;
        else
        {
            Node *temp = head;
            cout << "poped element is: " << temp->data << endl;
            head = head->next;
            delete temp;
        }
    }
    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

int main()
{

    Stack s(5);
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(45);
    cout << s.isEmpty() << endl;
    s.push(5);
    s.peak();
    s.pop();

    s.peak();
    s.pop();

    s.peak();
    s.pop();

    s.peak();
    s.pop();

    s.peak();
    s.pop();

    s.peak();
    s.pop();
    cout << s.isEmpty() << endl;

    return 0;
}