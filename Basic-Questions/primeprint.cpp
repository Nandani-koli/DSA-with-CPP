// program to print all prime number till n number 
#include<iostream>
using namespace std;
int num;
int isprime( int n){
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    cout<<"Enter a number:- ";
    cin>>num;
    
    for (int i = 2; i <= num; i++)
    {
        if (isprime(i))
        {
            cout<<i<<endl;
        }
        
    }
    
    
}