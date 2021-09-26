#include <iostream>
using namespace std;
int sumOfNatural(int n){
    int sum = 0 ;
    for (int i = 1; i <=n ; i++)
    {
        sum += i;
    }
    return sum;
}
int main(){

    int num;
    cout<<"Enter a number:- ";
    cin>> num;

    int answer = sumOfNatural(num);
    cout<<answer;
}