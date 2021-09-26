#include <iostream>
using namespace std;
#define celsius(f) (f-32)* 5/9
float f,c;
int main(){
    // ------using #define as function----
    cout<<"Enter degree in fahrenheit:-"<<endl;
    cin>>f;
    c = celsius(f);
    cout<<"Degree in celsius:"<<c<<endl;

// ----using simple method------
    // cout<<"Enter degree in fahrenheit:-"<<endl;
    // cin>>f;
    // c = (f-32)* 5/9;
    // cout<<"Degree in celsius:"<<c;
}