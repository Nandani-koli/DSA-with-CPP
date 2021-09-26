//  This code does not woke correctly for 1 and 2 value
// #include <iostream>
// using namespace std;
// int num, i;
// int main()
// {
//     cout << "Enter a number:- ";
//     cin >> num;
//     for (i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << num << " is not a prime" << endl;
//             break;
//         }
//         else{
//             cout<<num<< " is a prime number";
//             break;
//         }
//     }
// }
// ______________________CORRECT CODE______________
/*
#include<iostream>
using namespace std;
int num , isprime = 1;
int main(){
    cout<<"Enter number to check:- "<<endl;
    cin>>num;
    for (int i = 2; i*i <= num; i++)
    {
        if (num%i == 0)
        {
            isprime = 0;
        }
        
    }
    if (isprime==1)
    {
        cout<<num<< " is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
    
    
}
*/
//  ONE MORE SOLUTION _______________________

#include<iostream>
using namespace std;
int num ;
int main(){

    cout<<"enter a number to check:- ";
    cin>>num;
    int i;
    for (i = 2; i < num; i++)
    {
        /* code */
        if (num %i == 0)
        {
            /* code */
            cout<<"not prime number "<<endl;
            break;
        }
        
    }
    if (i == num)
    {
        /* code */
        cout<<"prime number ";
    }
    
    return 0;
}