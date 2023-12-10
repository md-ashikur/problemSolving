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

void remove(Node *head){
    Node* tmp = head;

    while (tmp != NULL) {
        
        int val = tmp->val;
        Node* nxt = tmp->next;

        while (nxt != NULL) {
            if (nxt->val == val) {
                tmp->next = nxt->next;
                delete nxt;
                nxt = tmp->next;
            } else {
                tmp = nxt;
                nxt = nxt->next;
            }
        }
        tmp = tmp->next;
    }
}

void printList(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

    Node *tmp = head;
    while(tmp != NULL){
        remove(tmp);
        tmp = tmp->next;
    }


    printList(head);
    return 0;
}
