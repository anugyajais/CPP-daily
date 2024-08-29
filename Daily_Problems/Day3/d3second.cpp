#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int s=1;
    for(int i=1; i<=n;i++)
        s*=i;
    cout<<"The factorial of "<<n<<" is: "<<s;
}