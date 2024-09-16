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

}