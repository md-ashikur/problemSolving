#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {
    int val;
    cin >> val;

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal != -1) {
            current->left = new Node(leftVal);
            q.push(current->left);
        }

        if (rightVal != -1) {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }
    return root;
}

void printLevel(Node* root, int level, int currentLevel = 0) {
    if (root == NULL) return;

    if (level == currentLevel) {
        cout << root->val << " ";
    } else {
        printLevel(root->left, level, currentLevel + 1);
        printLevel(root->right, level, currentLevel + 1);
    }
}

int getHeight(Node* root) {
    if (root == NULL) return -1;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = createTree();
    int level;
    cin >> level;

    int treeHeight = getHeight(root);

    if (level < 0 || level > treeHeight) {
        cout << "Invalid";
    } else {
        printLevel(root, level);
    }

    return 0;
}
