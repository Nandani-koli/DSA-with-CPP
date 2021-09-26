// BINARYSEARCH for sorted array 
#include<iostream>
using namespace std;
// function for binary search 
int binarySearch(int arr[],int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start+end)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
        return -1;
}
int main()
{
    // size of array 
    int n;
    cin>>n;
    // array declaration and taking input of elements 
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    // element for search 
    int key;
    cin>>key; 

    // calling funtion 
    cout<<binarySearch(array,n,key);
    
}