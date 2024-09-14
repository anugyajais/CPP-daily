#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[]={10,20,22,32,44,12,323};
    int n = sizeof(v)/sizeof(v[0]);    
    int* ptr = v;

    for (int i = 0; i < n; ++i) 
        cout << "Element at index " << i << " is " << *(ptr + i) << endl;
}
