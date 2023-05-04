#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
public:
    int minDepth(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if (left == 0 || right == 0)
        {
            return left + right + 1;
        }
        else
        {
            return min(left, right) + 1;
        }
    }  
};