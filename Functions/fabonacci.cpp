#include<iostream>
using namespace std;
int fab(int n){
    int a = 0 ;
    int b = 1;
    int sum = 0 ;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        sum = a+b;
        a = b ;
        b = sum;
    }
    return 0;
    
}
int main(){

    int num ;
    cout<< "enter range :- ";
    cin>> num;
    fab(num);
}