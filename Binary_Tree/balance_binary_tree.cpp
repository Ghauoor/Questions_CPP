#include <iostream>
#include <algorithm> // for max and abs functions

using namespace std;

// define the Node struct
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// define the Tree class
class Tree
{
private:
    // Height
    int height(Node *root)
    {
        if (root == nullptr)
            return 0;

        return max(height(root->left), height(root->right)) + 1;
    }

public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if (root == nullptr)
            return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        int diff = abs(height(root->left) - height(root->right));

        if (left && right && diff <= 1)
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

    Node *root = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    Tree tree;
    bool isBalanced = tree.isBalanced(root);
    cout << isBalanced << endl;
    return 0;
}
