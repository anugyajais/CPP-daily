#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int s=0;
    for(int i=1; i<=n;i++)
        s+=i;
    cout<<"The sum of the first "<<n<<" natural numbers is: "<<s;
}