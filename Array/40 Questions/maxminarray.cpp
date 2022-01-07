// 73 64 41 11 53 68 47 44 62 57 37 59 23 41 29 78 16 35 90 42 88 6 40 42 64 48 46 5 90 29 70 50 6 1
#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i <n; i++)
	{
	    cin>>a[i];
	}
	int i = 0;
	int min = a[0];
	int max = a[0];
	while(i < n)
	{
	    if(a[i] < min )
	    {
	        min = a[i];
	    }
	    else if(a[i] > max)
	    {
	        max = a[i];
	    }
	    i++;
	}
	cout<<max<<" "<<min<<endl;
	return 0;
}