#include <iostream>
using namespace std;
double fact=1;
int num;
int main(){
    cout<<"Enter number to find factorial:- ";
    cin>>num;
    for (int i = num; i > 0; i--)
    {
        fact= fact*i;
    }
    cout<<"Factorial of given number is = "<<fact;
}