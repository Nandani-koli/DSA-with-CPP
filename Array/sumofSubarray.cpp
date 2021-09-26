#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            int curr = 0;
            for(int j = i; j < n; j++) 
            {
                curr += a[j];
                cout<<curr<<" ";
            }
        }
        
    return 0;
}
