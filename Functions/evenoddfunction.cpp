#include <iostream>
using namespace std;
string check(int num){

    if (num%2 == 0)
    {
        return " even number" ;
    }
    else{
        return "odd number";
    }
    
}
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    cout<<check(n); 
}