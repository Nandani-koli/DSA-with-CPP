#include <iostream>
using namespace std;
int eligible(int age)
{
    if (age >= 18)
    {
        cout<<"eligible for voting ";
    }
    else
    {
        cout<<"not eligible ";
    }
    return 0;
}
int main()
{
    int age;
    cout<<"Enter your age:- ";
    cin>>age;

    eligible(age);
}