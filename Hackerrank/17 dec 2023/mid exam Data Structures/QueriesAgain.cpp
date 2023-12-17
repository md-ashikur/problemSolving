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

void insertHead(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void printNormal(Node *head){
     Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printReverse(Node *tail){
     Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}


void insert(Node *&head, Node *&tail, int x, int v)
{
    
    Node *newNode = new Node(v);

    if (x == 0)
    {
        insertHead(head, tail, v);
    }
    else
    {
        Node *tmp = head;
        int count = 0;

        while (tmp != NULL && count < x - 1)
        {
            tmp = tmp->next;
            count++;
        }

        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }

        newNode->next = tmp->next;
        newNode->prev = tmp;

        if (tmp->next != NULL)
            tmp->next->prev = newNode;
        else{
            tail = newNode;
        }
        tmp->next = newNode;
    }

   printNormal(head);
   printReverse(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert(head, tail, x, v);
    }

    return 0;
}
