/*
Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of the array: 75
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> a;
    for (int i=0; i<n; i++){
        int c;
        cin >>c ;
        a.push_back(c);
    }
    int sum =0;
    for (int i:a){
        sum+=i;
    } 
        
    cout << "sum: " << sum;
    return 0;
}