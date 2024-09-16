#include <bits/stdc++.h>
using namespace std;

bool isPalindrome( const string &strr)
{
    string str="";
    for(char c:strr)
        if(isalpha(c))
            str+=tolower(c);
 
    int len= str.size()-1;
 
    for (int i=0; i<len/2;i++)
    {
        if(str[i]!=str[len-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str= "aA man, a plan, a canal, Panamaa";
    // string s1="Madam, in Eden, I’m Adam.";
    // string s2="Was it a car or a cat I saw?";

    cout<<"Original string : \n"<<str<<endl;

    cout << (isPalindrome(str) ? "Is Palindrome" : "Not a Palindrome") << endl;
    
}