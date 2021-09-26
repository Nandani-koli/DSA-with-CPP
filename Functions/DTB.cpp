#include<iostream>
using namespace std;
int decimalToBinary(int n){
    int pow = 1;
    int ans = 0;
    while(pow <= n){
        pow *=2;
        pow /= 2;
    }
    while(pow>0){
        int lastdigit = n/pow;
        n -= lastdigit *pow;
        pow /= 2;
        ans = ans*10  + lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number :-";
    cin>>n;

    cout<<decimalToBinary(n);
}
