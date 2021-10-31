#include <iostream>
using namespace std;
int main()
{
    //Switch Statements
    int num = 2;
    switch (num)
    {
    case 1:
        cout << "This is 1st case\n";
        break;

    case 2:
        cout << "This is 2nd Case\n";
        break;

    default:
        cout << "enter valid number\n";
    }

    // The break statement can also be used to jump out of a loop.
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }

    // The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
}