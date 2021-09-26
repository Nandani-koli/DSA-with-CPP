// Program to find sum of n natrural numbers
#include <iostream>
using namespace std;
int num, sum = 0;
int main()
{
    cout << "Enter a number:-" << endl;
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        sum = sum + i;
    }
    cout << "Sum of n natural numbers = " << sum << endl;
}