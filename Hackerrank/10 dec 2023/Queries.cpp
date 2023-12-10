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

void insertHead(Node *&head, int val){
 Node *newNode = new Node(val);
 newNode->next = head;
 head=newNode;
}

void insertTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

   Node *tmp = head;
   while (tmp->next != NULL){
    tmp = tmp->next;
   }
   tmp->next = newNode;
}

void deleteIndex(Node*& head, int pos) {
    if (head == NULL) return;

    if (pos == 0) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }

    Node* prev = NULL;
    Node* current = head;
    int count = 0;

    while (current != NULL && count != pos) {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == NULL) return;

    prev->next = current->next;
    delete current;
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
    int q;
    cin >> q;
    
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insertHead(head, v);
        }
        else if (x == 1)
        {
            insertTail(head, v);
        }
        else if (x == 2)
        {
            deleteIndex(head, v);
        }
        printList(head);
    }

    return 0;
}
