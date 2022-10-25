/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-22 22:35:31
 * @modify date 2021-07-22 22:35:31
 * @desc Program to implement basic operation on a binary search tree
 */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool searchRecursive(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (root->key == x)
        return true;
    else if (root->key > x)
        return searchRecursive(root->left, x);
    else
        return searchRecursive(root->right, x);
}

bool searchIterative(Node *root, int x)
{
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key > x)
            root = root->left;
        else
            root = root->right;
    }

    return false;
}

Node *insertRecursive(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->key > x)
        root->left = insertRecursive(root->left, x);
    else if (root->key < x)
        root->right = insertRecursive(root->right, x);
    return root;
}

Node *insertIterative(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;

    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }

    if (parent == NULL)
        return temp;
    if (parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}

// This inorder successor is not a good way to find it in general, it works only when right child is not null
// In some cases in general, inorder successor may be ancestor, but not for this case
Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}

Node *deleteNode(Node *root, int x)
{
    if (root == NULL)
        return NULL;
    if (root->key > x)
        root->left = deleteNode(root->left, x);
    else if (root->key < x)
        root->right = deleteNode(root->right, x);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key);
        }
    }

    return root;
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);

    if (searchRecursive(root, 16))
        cout << "Found";
    else
        cout << "Not Found";

    cout << endl;

    if (searchIterative(root, 16))
        cout << "Found";
    else
        cout << "Not Found";

    cout << endl;

    root = insertRecursive(root, 20);
    inorder(root);

    cout << endl;

    root = insertIterative(root, 30);
    inorder(root);

    cout << endl;

    root = deleteNode(root, 30);
    inorder(root);

    cout << endl;

    return 0;
}