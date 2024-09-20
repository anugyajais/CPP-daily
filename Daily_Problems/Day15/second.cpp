#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int data)
    {
        this -> val = data;
        this->next =  NULL;
    }
    ~Node(){
        int data = this->val;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void printlist(Node *&head)
{
    Node * node1= head;
    while(node1 != NULL)
    {
        cout<<node1->val<<"->";
        node1=node1->next;
    }
    cout<<"NULL"<<endl;
}
void valDelete(Node*&head, int d)
{
    if(head==nullptr)
    {
        cout<<"empty LL"<<endl;
        return; 
    }
    if(head->val==d)
    {
        Node *a=head;
        head=head->next;
        a->next = nullptr;
        delete a;
        return;
    }
    Node *t=head;
    while(t->next)
    {
        if(t->next->val==d)
        {
            Node * a=t->next;
            t->next = t->next->next;
            a->next = nullptr;
            delete a;
            break;
            return;
        }
        t=t->next;
    }
}
void tailInsert(Node*&head, int d)
{
    Node* niuend = new Node(d);
    if(head==nullptr)
    {
        head=niuend;
        return;
    }
    Node*t=head;
    while (t->next)
    {
        t=t->next;
    }
    t->next=niuend;
}
int main()
{
    Node* head = nullptr;
    tailInsert(head , 3);
    tailInsert(head , 32);
    tailInsert(head , 44);
    tailInsert(head , 52);
    tailInsert(head , 12);
    printlist(head);
    cout<<"Enter value to delelte: ";
    int del; cin>>del;
    valDelete(head, del);
    printlist(head);

}