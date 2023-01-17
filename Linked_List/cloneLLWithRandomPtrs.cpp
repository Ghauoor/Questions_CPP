#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *arb;

    Node(int x)
    {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

class Solution
{
private:
    void insertAtTail(Node *&head, Node *&tail, int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else 
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node *copyList(Node *head)
    {
        //* Step-I Create a Clone LL
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;

        Node *temp = head;

        while (temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        //* Step-II Create a Map

        unordered_map<Node *, Node *> oldToNewNode;
        Node *orignalNode = head;
        Node *cloneNode = cloneHead;
        while (orignalNode != NULL && cloneNode != NULL)
        {
            oldToNewNode[orignalNode] = cloneNode;
            orignalNode = orignalNode->next;

            cloneNode = cloneNode->next;
        }

        orignalNode = head;
        cloneNode = cloneHead;

        while (orignalNode != NULL)
        {
            cloneNode->arb = oldToNewNode[orignalNode->arb];
            orignalNode = orignalNode->next;

            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};