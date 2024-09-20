#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr = nullptr;
    ptr= new int;
    *ptr= 44;
    cout<<"Dynamic variable: "<<*ptr<<endl;

    delete ptr;
    ptr=nullptr;
}