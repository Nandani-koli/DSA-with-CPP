#include<iostream>
using namespace std;
int area,length;
int Area(int l){
    int a = l*l;
    return a;
}
int main(){
    cout<<"Enter length of square:-"<<endl;
    cin>>length;
    area = Area(length);
    cout<<"Area of square ="<<area<<endl;
}