#include<bits/stdc++.h>
using namespace std;

bool pythogorean(int x,int y,int z){

    int a = max(x,max(y,z));
    int b, c;
    if (a == x)
    {
        b = y ;
        c = z ;
    }
    else if(a == y)
    {
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c)
    {
        return true;
    }
    else{
        return false;
    }    

}
int main(){

    int x,y,z;
    cout<<"Enter 3 numbers:- ";
    cin>>x>>y>>z;
    if(pythogorean(x,y,z))
    {
        cout<<"Pythogorean";
    }
    else{
        cout<<"Not pythogorean";
    }
}