#include <iostream>
using namespace std;
int alphabet(char c){
    if (c >= 'a' && c <= 'z'  || c >= 'A' && c <= 'Z')
    {
        cout<<c<<" is an alphabet";
    }
    else
    {
        cout<<c<< " is not an alphabet";
    }
    return 0;
}
int main(){

    char ch ;
    cout<<"enter any character :- ";
    cin>>ch;

    alphabet(ch);
}