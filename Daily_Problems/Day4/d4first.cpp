#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<"Addition: "<< a+b<<endl;
    cout<<"Subtraction: "<< a-b<<endl;
    cout<<"Multiplication: "<< a*b<<endl;
    cout<<"Division: "<<fixed<<setprecision(6)<<static_cast<double>(a)/b<<endl;
    cout<<"Modulus: "<< a%b<<endl;

}