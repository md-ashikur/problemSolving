#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertTail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int difference(Node *head)
{
    
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *tmp = head;

    if (head == NULL) return 0;

    while (tmp != NULL)
    {
        mn = min(mn, tmp->val);
        mx = max(mx, tmp->val);
        tmp = tmp->next;
    }
    return mx - mn;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertTail(head, tail, val);
    }

    cout << difference(head) << endl;

    return 0;
}
