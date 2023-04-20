#include <iostream>

using namespace std;
//? https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
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

class solution
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
};
