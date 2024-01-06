#include <iostream>
#include <queue>

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

Node* createTree(const vector<int>& nodes) {
    if (nodes.empty()) return NULL;

    Node* root = new Node(nodes[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        Node* current = q.front();
        q.pop();

        int val = nodes[i++];
        if (val != -1) {
            current->left = new Node(val);
            q.push(current->left);
        }

        if (i < nodes.size()) {
            val = nodes[i++];
            if (val != -1) {
                current->right = new Node(val);
                q.push(current->right);
            }
        }
    }
    return root;
}

int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int getHeight(Node* root) {
    if (root == NULL) return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

bool isPerfect(Node* root) {
    int totalNodes = countNodes(root);
    int height = getHeight(root);
    return totalNodes == (1 << height) - 1;
}

int main() {
    int val;
    vector<int> nodes;

    while (cin >> val) {
        nodes.push_back(val);
    }

    Node* root = createTree(nodes);

    if (isPerfect(root)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
