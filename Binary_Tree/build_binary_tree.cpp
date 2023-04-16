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

// inOrder Traversal --> (LNR)

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// PreOrder Traversal

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// PostOrder traversal
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Build tree from Level order Traversal
void buildFromLevelOrder(Node *&root)
{
    queue<Node *> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    /*

    // create tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // Level order traversal
    levelOrderTraversal(root);

    // InOrder traversal
    cout << endl
         << "In Order Traversal is: ";
    inorder(root);

    // Pre Order Traversal
    cout << endl
         << "Pre Order Traversal is: ";
    preorder(root);

    // PostOrder traversal
    cout << endl
         << "Post Order Traversal is: ";
    postorder(root);

    return 0;
     */
}