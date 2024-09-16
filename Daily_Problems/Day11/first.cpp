#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> arr={10,-2,22,-121,33,1,11,3,44};
    cout<<"array is :"<<endl;
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<"\nEnter the value to search: ";
    int xx; cin>>xx;

    for(int i:arr)
    {
        if(i==xx)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

}