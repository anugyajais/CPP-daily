#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    getline(cin,c);
    int k=0;
    char cc; cin>>cc;
    for(char a:c)
    {
        if(a==cc)
        {
            k++;
        }
    }
    cout<<k;
}