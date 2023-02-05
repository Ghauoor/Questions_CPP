#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int x, Node *next) : val(x), next(next) {}
};
Node *swapNodes(Node *head, int k)
{
    Node *slow = head;
    Node *fast = head;

    while (--k)
    {
        fast = fast->next;
    }

    Node *first = fast;

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    swap(first->val, slow->val);
    return head;
}