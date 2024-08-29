#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    int m=a;
    if(a>b&&a>c)
    {
        m=a;
    }
    else if (b>>a &&b>>c)
    {
        m=b;
    }
    else
    {
        m=c;
    }
    cout<<"The largest number is: "<<m;
    return 0;
}