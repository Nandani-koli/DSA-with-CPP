#include <iostream>
#include <string>
using namespace std;

int main()
{
    // A reference variable is a "reference" to an existing variable, and it is created with the & operator:
    // string food = "Pizza";
    // // string &meal = food;

    // cout << food << "\n"; // Outputs Pizza
    // cout << meal << "\n"; // Outputs Pizza
    // cout << &food << "\n"; //memory address

    //  A pointer however, is a variable that stores the memory address as its value.
    int a = 90;
    int *ptr = &a;

    cout << ptr << "\n";

    // the * sign can be confusing here, as it does two different things in our code:
    // 1. When used in declaration (string* ptr), it creates a pointer variable.
    // 2. When not used in declaration, it act as a dereference operator.

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    *ptr = 60;
    cout << *ptr << "\n";
    cout << a << "\n";
}
