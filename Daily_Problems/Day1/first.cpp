#include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector <string> s;
    string p ;
    string q;
    getline(cin,p);
    s.push_back(p);
    getline(cin,q);
    s.push_back(q);
    for(string c:s)
        cout<<c;

    return 0;

    
}