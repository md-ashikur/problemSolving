#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree()
{

    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printLeft(Node *root)
{

    if (root == NULL)
        return;
    
    if (root->left)
        printLeft(root->left);
    else
        printLeft(root->right);
   
   cout << root->val << " ";
}

void printRight(Node *root)
{

    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right)
        printRight(root->right);
    else
        printRight(root->left);
   
   
}

void inOrder(Node *root)
{

    if (root == NULL)
        return;

    printLeft(root->left);
    cout << root->val << " ";
    printRight(root->right);
};

int main()
{

    Node *root = inputTree();
   inOrder(root);
    return 0;
}