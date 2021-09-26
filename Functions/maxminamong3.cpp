#include <iostream>
using namespace std;
int max(int a, int b, int c){
    if (a>b &&a >c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int min(int a, int b, int c){
    if (a<b &&a <c)
    {
        return a;
    }
    else if (b<a && b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main(){

    int num1 , num2, num3;
    cout<<"Enter 3 numbers:- ";
    cin>> num1>>num2>>num3;

   int maximum = max(num1,num2,num3);
   int minimum = min(num1,num2,num3);

   cout<<"maximum number = "<<maximum<<endl;
   cout<<"minimum number = "<<minimum;
}