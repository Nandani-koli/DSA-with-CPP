// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {   
//         int n;
//         cin>>n;

//         int a[n];
//         for(int i = 0; i <n; i++){
//             cin>>a[i];
//         }    

//         int forward[n] = {0};
//         int reverse[n] = {0};
        
//         for(int i = 0; i < n; i++){
//             forward[i] = forward[i-1] + a[i];
//         }
//         for(int i = n-1; i <= 0; i--){
//             reverse[i] = reverse[i+1] + a[i];
//         }
        
//         for(int i=0; i < n ; i++)
//         {
//             if(forward[i] == reverse[i]){
//                 cout<<i+1;
//             }
//         }
//         cout<<"not found";

//     return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c = 5.0;
    float far = (9/5)*c + 32;
    cout << fixed << "Temperature in Fahrenheit is "<< setprecision(2) << far;
    return 0;
} 