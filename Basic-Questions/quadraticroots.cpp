#include<bits/stdc++.h>
using namespace std;

int main() {
        // code here
        int a,b,c;
        cin>>a>>b>>c;

       int x , y;
       int d = (b * b) - (4 * a * c);
       double sqrt_val = sqrt(abs(d));
       
        if((b*b) < (4*a*c))
        {
            int img = -1;
            cout<< img;
            cout<<"Imaginary";
        }
        else{
            x = floor( ((-b) + sqrt_val)/(2*a) );
            y = floor( ((-b) - sqrt_val)/(2*a) );
        }
        int maxroot ;
        int minroot ;
        maxroot = max(x,y);
        minroot = min(x,y);
    
        cout<<maxroot<<" "<<minroot;
}
