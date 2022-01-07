// Problem Statement
// You are given a 2D array with dimensions ‘N*M’. You need to read the array elements row-wise and return a linear array that stores the elements like a wave i.e the 1st-row elements are stored from left to right, 2nd-row elements are stored from right to left, and so on.
// input -> 
// 2 3
// 5 1 2
// 7 0 1
//OUTPUT -> 5 1 2 1 0 7

#include <iostream>
using namespace std;
int main()
{
    int n,m ;
    cin>>n>>m;

    int a[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    //WAVEFORM TRAVERSE
    int output[n*m];
    int k = 0;
    for(int i = 0; i<n; i++)
    {   
        if(i%2 == 0)
        {
            for(int j = 0; j<m; j++)
            {
                output[k] = a[i][j];
                k++;
            }
        }
        else
        {
            for(int j = m-1; j>=0; j--)
            {
                output[k] = a[i][j];
                k++;
            }
        }
    }
    for(int i = 0; i<n*m; i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
}
