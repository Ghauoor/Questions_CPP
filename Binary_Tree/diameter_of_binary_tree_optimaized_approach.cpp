#include <bits/stdc++.h>
using namespace std;
//! https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(TreeNode *node, int &diameter)
    {
        if (!node)
        {
            return 0;
        }

        int lH = height(node->left, diameter);
        int rH = height(node->right, diameter);
        diameter = max(diameter, lH + rH);
        return 1 + max(lH, rH);
    }
};