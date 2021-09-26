#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n;
    cout<<"enter a number :- ";
    cin>> n;
     long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout<<fact<<endl;;
     long long digits = 0;
       digits = floor(log10(fact)+1);
        cout<<digits;
}
