#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c, 0));
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int nn;
    cout<<"Enter the value to search: ";
    cin>>nn;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c;j++)
        {
            if(matrix[i][j]==nn)
            {
                cout<<"YES"<<endl;
                return 0;   
            }
        }
    }
    cout<<"NO";
}