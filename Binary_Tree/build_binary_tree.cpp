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

//? Level Order Traversal
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    // Work as seprator for levels
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL) // Means old level is compelety traversed
        {
            cout << endl;

            if (!q.empty()) // Queue still have some child nodes
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << "  ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;

    // create tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // Level order traversal
    levelOrderTraversal(root);
    return 0;
}