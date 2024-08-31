/*

Ques-02 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

Sample Input:
Enter the size of the array: 5
Enter the array elements: 5 10 15 20 25

Sample Output:
Number of odd numbers: 3
Number of even numbers: 2

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
    int even =0;
    int odd =0;
    for (int i:a){
        if(i%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    } 
        
    cout << "even: " << even<<endl;;
    cout << "odd: " << odd;
    return 0;
}