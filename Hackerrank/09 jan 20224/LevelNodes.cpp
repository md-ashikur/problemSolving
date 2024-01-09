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

void level(Node *root, int x) {
    if (root == NULL) {
        cout << "Invalid"<<endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty()) {
        pair<Node*, int> parent = q.front();
        q.pop();
        Node* node = parent.first;
        int level = parent.second;

        if (level == x) {
            cout << node->val << " ";
            found = true;
        } else if (level > x) {
            break; 
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    if (!found) cout << "Invalid"<<endl;
    
}

int main() {
    Node *root = inputTree();
    int x;
    cin >> x;
    level(root, x);
    return 0;
}
