#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sum=0;
    for(int i=1;i<=5;i++)
    {
        int n;
        cout<<"Enter grade "<<i<<": ";
        cin>>n;
        sum+=n;
    }
    cout<<"The average grade is: "<<sum/5;
}