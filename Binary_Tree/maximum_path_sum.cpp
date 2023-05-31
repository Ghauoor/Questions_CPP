#include <bits/stdc++.h>
using namespace std;

//! https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
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
    int maxPathSum(TreeNode *root)
    {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }

private:
    int maxPathDown(TreeNode *node, int &maxi)
    {
        if (!node)
            return 0;
        //? If the maxPathDown is negitive i'll return zero instead id -ive value
        int left = max(0, maxPathDown(node->left, maxi));
        int right = max(0, maxPathDown(node->right, maxi));

        maxi = max(maxi, left + right + node->val);
        return max(left, right) + node->val;
    }
};