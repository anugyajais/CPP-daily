#include <bits/stdc++.h>
using namespace std;

class Stud
{
    public:
    int id;
    string name;
    string prog;

    Stud(int i , string n , string p)
    {
        id= i; 
        name = n;
        prog = p;
    }
    void display()
    {
        cout<<"Name: "<<this->name<<endl;
        cout<<"ID: "<<this->id<<endl;
        cout<<"Program: "<<this->prog<<endl;
    }
};
int main()
{
    int i; string n,p;
    cout<<"Enter the student ID:"<<endl;
    cin>>i;
    cout<<"Enter the student Name:"<<endl;
    cin>>n;
    cout<<"Enter the student Programme:"<<endl;
    cin>>p;
    
    Stud s1(i ,n ,p);
    s1.display();
}