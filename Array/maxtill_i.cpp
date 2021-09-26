// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)  
    cin>>a[i]; 

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        cout<<max<<" ";
        
    }
    return 0;
}