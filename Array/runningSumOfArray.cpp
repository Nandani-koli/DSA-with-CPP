#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int result[n];
    result[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        result[i] = result[i-1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
