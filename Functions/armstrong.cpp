#include<math.h>
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number:- ";
    cin>>n;

    int original = n;
    int sum = 0;
    while (n>0)
    {
       int lastdigit = n%10;
       sum += pow(lastdigit,3);
       n = n/10;
    }
    if (sum == original)
    {
        cout<<"Armstrong Number ";
    }
    else{
        cout<<"Not Armstrong Number ";
    }
    
    return 0;
}