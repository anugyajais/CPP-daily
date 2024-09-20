#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    Rectangle(int ll , int bb)
    {
        length=ll;
        breadth=bb;
    }
    Rectangle(const Rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
        cout<<"copy constr"<<endl;
    }
    void display()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }
};

int main()
{
    Rectangle r1(2,3);

    r1.display();


    Rectangle r2=r1;
    r2.display();
}