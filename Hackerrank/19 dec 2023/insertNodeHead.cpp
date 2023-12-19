#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
  

}

void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        insertAtHead(head, tail, x);
    }
    print(head);

    return 0;
}