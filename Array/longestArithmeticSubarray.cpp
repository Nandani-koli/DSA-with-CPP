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
        for(int i = 0; i<n; i++)  cin>>a[i];
        
        int cur = 2;
        int pd = a[1]- a[0];
        int j = 2;
        int ans = 2;
        while (j < n)
        {
            if (pd == a[j] - a [j-1])
            {
                cur++;
            }
            else{
                pd = a[j] - a[j-1];
                cur = 2;
            }
            ans = max(ans, cur);
            j++;
        }

        cout<<ans<<" ";

    return 0;
}