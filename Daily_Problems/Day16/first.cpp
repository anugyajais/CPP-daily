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
void valInsert(Node*&head, int d)
{
    Node* niunode = new Node(d);
    Node *a=head;
    if(head==nullptr)
    {
        niunode->next = head;
        head = niunode;
        
        return; 
    }
    Node *t=head;
    while(t->next)
    {
        if(t->next->val>d)
        {
            niunode->next = t->next;
            t->next = niunode;

            return;
        }
        t=t->next;
    }
    t->next = niunode;
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
    tailInsert(head , 72);
    printlist(head);
    cout<<"Enter value to insert: ";
    int v; cin>>v;
    valInsert(head, v);
    printlist(head);

}