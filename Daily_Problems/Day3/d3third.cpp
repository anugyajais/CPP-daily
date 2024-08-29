#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int s=1;
    cout<<"Multiplication table of "<<n<<":"<<endl;
    for(int i=1; i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}