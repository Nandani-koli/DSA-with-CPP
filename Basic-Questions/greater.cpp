// program to find greatest among 3 numbers
#include<iostream>
using namespace std;
int a ,b,c;
int main(){
        #ifndef ONLINE_JUDGE
  
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
  
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
  
    #endif
    
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    
    if (a>b&&a>c)
    {
    cout<<a<<" is greater"<<endl;
    }
    else if (b>a&&b>c)
    {
        cout<<b<<" is greater"<<endl;
    }
    else{
        cout<<c<<" is greater"<<endl;
    }
    
}