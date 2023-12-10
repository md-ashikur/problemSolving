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
};

int search(Node *head, int x)
{

    int index = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return index;
        }
        else{
            
        }
        index++;
        tmp = tmp->next;
    }
   

    return -1;
};

int main()
{

    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        cout << search(head, x) << endl;
    }

    return 0;
}
