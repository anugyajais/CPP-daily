#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cout<<"Enter the score: ";
    cin>>s;
    char g;
    if(s>=90)
    {
        g='A';
    }
    else if (s>=80)
    {
        g='B';
    }
    else if (s>=70)
    {
        g='C';
    }
    else if (s>=60)
    {
        g='D';
    }
    else
    {
        g='E';
    }
    cout<<"Grade: "<<g;

}