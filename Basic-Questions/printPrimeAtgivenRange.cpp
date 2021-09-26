#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    cout <<"enter two numbers:- ";
    cin>>a>>b;

    for (i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout<<i<<" ";
        }
        
        
    }
    return 0;
    
}