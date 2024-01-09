#include<bits/stdc++.h>
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

Node* inputTree()
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

int MaxDepth(Node* root) {
    if (root == NULL) return 0;
    int l = MaxDepth(root->left);
    int r = MaxDepth(root->right);
    return max(l, r) + 1;
}

int countNodes(Node* root) {
    if (root == NULL) return 0;
    int count = 1 + countNodes(root->left) + countNodes(root->right);
    return count;
}

bool isPerfect(Node* root) {
    int mx = MaxDepth(root);
    int nodeCount = countNodes(root);
    int p = pow(2, mx) - 1;
    return nodeCount == p;
}

int main()
{
 
    Node *root = inputTree();
  if (isPerfect(root))
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
   
    return 0;
}