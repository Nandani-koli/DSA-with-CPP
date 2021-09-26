#include <iostream>
using namespace std;
int decimalToOctal(int n)
{
    int pow = 1;
    int ans = 0;

    while(pow <= n)
    {
        pow *= 8;
        pow /= 8;
    }
    while (pow > 0)
    {
        int lastdigit = n / pow;
        n -= lastdigit * pow;
        pow /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number:- ";
    cin>>n;
    cout<< decimalToOctal(n);
}