#include <bits/stdc++.h>

using namespace std;
int main()
{
    string n1, n2;
    int r1,r2;
    int i1,i2;
    cout<<"Complex Number 1: ";
    getline(cin,n1);
    cout<<"Complex Number 2: ";
    getline(cin,n2);
    
     r1 = stoi(n1.substr(0, n1.find('+')));
     r2 = stoi(n2.substr(0, n2.find('+')));
    // r2= (int)n2[0];
    i1= (int)n1[2];
    i2= (int)n2[2];
    int s1 = r1 + r2;
    int s2 = i1 + i2;
    int d1 = r1 - r2;
    int d2 = i1 - i2;
    cout<<"Sum: "<<s1<<" + "<<s2<<"i"<<endl;
    cout<<"DIfference: "<<d1<<" + "<<d2<<"i";
    
    return 0;


}