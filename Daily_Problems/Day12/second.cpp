#include <bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int val;
    Node* next;
    Node(int d)
    {
        this->val = d;
        this->next=nullptr;
    }
    ~Node()
    {
        delete next;

    }
};

void insertAtEnd(Node * &head , int data)
{
    Node * newend = new Node(data);
    Node *temp = head;
    if(head==nullptr)
    {
        head=newend;
        return;
    }
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next=newend;
    
}
void printLinkedList(Node * head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printLinkedList(head);
    insertAtEnd(head, 55);
    printLinkedList(head);

}