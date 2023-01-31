#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

void deleteNode(Node *del)
{
    del->val = del->next->val;
    del->next = del->next->next;
}
