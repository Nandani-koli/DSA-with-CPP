#include <iostream>
using namespace std;
   void reverse(int a[],int st,int ed)
   {
    while(st <= ed)
    {
        swap(a[st],a[ed]);
        st++;
        ed--;
    }
   }
void rotate(int a[], int d, int n)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

int main() {
    //Write your code here
	int n,d;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>d;
    
    rotate(a,d,n);
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
