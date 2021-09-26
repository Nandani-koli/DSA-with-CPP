#include <bits/stdc++.h>
using namespace std;
string decimalToHexadecimal(int n)
{
    int placevalue = 1;
    int ans = 0;
    int rem = 1;
    while (n != 0)
    {
        rem = n%2;
        n = n/2;
        if (rem <= 9)
        {
            // rem = to_string(rem);
            ans = ans + rem * placevalue;
        }
        else
        {
            char c = 'A' + rem - 10;
        }
        placevalue *= 10;
    }
     
}
int decimalToOctal(int n)
{
    int ans = 0;
    int rem = 1;
    int i = 1;
    while (n != 0)
    {
        rem = n%8;
        n /= 8;
        ans = ans + rem * i ;
        i *= 10;
    }
    return ans ;

}
int decimalToBinary(int n)
{
    int ans = 0;
    int rem = 1;
    int i = 1;
    while (n != 0)
    {
        rem = n%2;
        n /= 2;
        ans = ans + rem * i ;
        i *= 10;
    }
    return ans ;

}
int hexaToDecimal(string n)
{
    int sum = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            sum += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            sum += x * (n[i] - 'A' + 10);
        }
        x = x * 16;
    }
    return sum;
}
int binaryToDecimal (int n)
{
    int binary = 0;
    int x = 1;

    while (n>0)
    {
        int lastdigit = n%10;
        binary += x * lastdigit;
        x = x *2;
        n /= 10;
    }
    return binary;
}
int octalToDecimal(int n)
{
    int octal = 0;
    int weight = 1;
    while (n > 0)
    {
        int lastdigit = n%10;
        octal += weight * lastdigit;
        weight *= 8;
        n/= 10;
    }
    return octal;
}
int main()
{

    int num;
    cout << "enter digits:- ";
    cin >> num;

    // cout<<binaryToDecimal(num);
    // cout<<octalToDecimal(num);
    // cout<<hexaToDecimal(num);
    // cout << decimalToBinary(num);
    cout<< decimalToOctal(num);
}