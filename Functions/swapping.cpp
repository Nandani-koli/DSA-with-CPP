#include<iostream>
using namespace std;
int swap(int a , int b){

    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"value of a = "<<a<<endl;
    cout<<"value of b = "<<b;
    return 0;
}
int main(){
    int num1,num2;
    cout <<"enter value of a :- ";
    cin>>num1;
    cout<<"enter value of b :-  ";
    cin>>num2;

   swap(num1,num2);
}