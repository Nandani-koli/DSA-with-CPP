#include <iostream>
using namespace std;
int n;
int main(){
    cout<<"Enter a number :- ";
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        // sum = sum + i;
    }
     cout<<sum<<endl;
}