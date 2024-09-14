#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=49;
    int *ptr= &a;
    int **ptrr=&ptr;
    cout << "Value of var: " << a << endl;
    cout << "Value of var using ptr: " << *ptr << endl;
    cout << "Value of var using ptrToPtr: " << **ptrr << endl;
}