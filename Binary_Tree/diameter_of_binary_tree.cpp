#include <iostream>

using namespace std;
//? https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    int height(struct Node *node)
    {
        if (node == NULL)
            return 0;

        int right = height(node->right);
        int left = height(node->left);

        return max(right, left) + 1;
    }
    int diameter(struct Node *root)
    {
        if (root == NULL)
            return 0;

        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + height(root->right) + 1;

        int ans = max(op1, max(op2, op3));

        return ans;
    }
};