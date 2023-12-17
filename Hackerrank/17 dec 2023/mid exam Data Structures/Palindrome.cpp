#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

bool palindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }

    Node *newhead = head;
    Node *newtail = head;

    while (newtail->next != NULL)
    {
        newtail = newtail->next;
    }

    while (newhead != newtail && newhead->prev != newtail)
    {
        if (newhead->val != newtail->val)
            return false;
        newhead = newhead->next;
        newtail = newtail->prev;
    }

    return true;
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

    if (palindrome(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}