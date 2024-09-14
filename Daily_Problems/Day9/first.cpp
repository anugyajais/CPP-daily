#include <bits/stdc++.h>
using namespace std;
int main()
{
    int var; cin>>var;
    int* ptr = &var;
    cout << "Value of var: " << var << endl;
    cout << "Value of var using pointer: " << *ptr << endl;

}