
#include<bits/stdc++.h>
using namespace std;
//Method 1:-

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
          int z = 0,o = 0, t = 0;
   
        for(int i = 0; i<n; i++)
        {
            if(a[i] == 0)
            {
                z++;
            }
            else if(a[i] == 1)
            {
                o++;
            }
            else
            {
                t++;
            }
        }
        
        for(int i = 0; i < z; i++)
        {
            a[i] = 0 ;
        }
        for(int i = z; i < z+o; i++)
        {
            a[i] = 1;
        }
        for(int i = z+o; i< z+o+t; i++)
        {
            a[i] = 2;
        }
    }
};

//method 2:-
// class Solution
// {
//     public:
//     void sort012(int a[], int n)
//     {
//         // coode here 
//         int low = 0,mid = 0, high = n-1;
//     while(mid <= high)
//     {
//         if(a[mid] == 0)
//         {
//             swap(a[low],a[mid]);
// 			low++;
// 			mid++;
//         }
//         else if(a[mid] == 2)
//         {
//             swap(a[high],a[mid]);
// 			high--;
//         }
//         else{
//             mid++;
//         }
//     }
//     }
// };


int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
