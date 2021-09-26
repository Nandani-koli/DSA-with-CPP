#include<iostream>
using namespace std;
int main(){
    char ch; 
    int a,b, c;
    cout<<"Enter an operator:-  ";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"enter two numbers for Addition:- ";
        cin>>a>>b;
        c = a+b;
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<c;
        break;
    
    case '-':
        cout<<"enter two numbers for substraction:- ";
        cin>>a>>b;
        c = a-b;
        cout<<"substraction of "<<a<<" and "<<b<<" is "<<c;
        break;

    case '*':
        cout<<"enter two numbers for Multiplication:- ";
        cin>>a>>b;
        c = a*b;
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<c;
        break;

    case '/':
        cout<<"enter two numbers for Division:- ";
        cin>>a>>b;
        c = a/b;
        cout<<"Division of "<<a<<" and "<<b<<" is "<<c;
        break;
    
    case '%':
        cout<<"enter two numbers for Module:- ";
        cin>>a>>b;
        c = a%b;
        cout<<"Module of "<<a<<" and "<<b<<" is "<<c;
        break;
    
    default:
         cout<<"Enter correct operator";
        break;
    }
}