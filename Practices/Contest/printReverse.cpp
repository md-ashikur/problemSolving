#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void reversePrint(Node* head) {
    if (head == NULL) return;
    
    reversePrint(head->next);
    cout << head->data << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        Node* head = NULL;
        Node* tail = NULL;

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;

            Node* node = new Node(val);

            if (head == NULL) {
                head = node;
            } else {
                tail->next = node;
            }

            tail = node;
        }

        reversePrint(head);
    }

    return 0;
}
