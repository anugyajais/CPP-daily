#include <bits/stdc++.h>
using namespace std;

int maxOfArr( const vector <int> &arr, int size)
{
    int max= arr[0];
    for(int i:arr)
    {
        if(i>max)
        {
            max=i;
        }
    }
    return max;
}

int main()
{
    vector<int> arr={10,-2,22,-121,33,1,11,3,44};
    cout<<"array is :"<<endl;
    for(int i:arr)
    {
        cout<<i<<" ";
    }

    cout<<"max in array = "<<maxOfArr(arr , sizeof(arr)/sizeof(arr[0]));
}