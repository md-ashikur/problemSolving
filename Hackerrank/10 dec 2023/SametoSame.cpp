#include <bits/stdc++.h>
#include <iostream>
#include <climits>
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
};

bool cmp(Node *head1, Node *head2)
{

        Node *tmp1 = head1;
        Node *tmp2 = head2;
   
        while (tmp1 != NULL && tmp2 != NULL)
        {
            if (tmp1->val != tmp2->val)
                return false;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        };

   
   return (tmp1 == NULL && tmp2 == NULL); 
        
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insertTail(head1, tail1, val1);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insertTail(head2, tail2, val2);
    }

    bool result = cmp(head1, head2);
    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
