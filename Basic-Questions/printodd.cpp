// odd number which is not divisible by 2 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:- ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        if (i%2== 0)
        {
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}