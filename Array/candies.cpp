#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int extra;
    cin>>extra;
    
    bool out[n];

    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if ((extra+a[i]) > maxNo)
        {
            out[i] = true;
        }
        else
        {
            out[i] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<out[i]<<" ";
    }
    
}