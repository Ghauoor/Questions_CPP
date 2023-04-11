#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//? Build Tree
Node *buildTree(Node *root)
{
    cout << "Enter the Data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    //? Edge Case
    if (data == -1)
    {
        return NULL;
    }

    //! Recursive Call
    cout << "Enter data for Interting in Left: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for Interting in Right: " << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    Node *root = NULL;

    // create tree
    root = buildTree(root);
    return 0;
}