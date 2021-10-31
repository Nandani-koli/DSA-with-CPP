#include <iostream>
using namespace std;
int sum (int a, int b)      //function declaration    (here int a and int b are parameters)
{
    int c;                  //function defination/body
    c = a+b;
    return c;
}
// DEfault parameter example
// You can also use a default parameter value, by using the equals sign (=).

// If we call the function without an argument, it uses the default value ("Norway"):
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

// Pass By Reference
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// Function Overloading
// With function overloading, multiple functions can have the same name with different parameters:

int add(double a, double b)
{
    return a+b;
}
void add(int a = 9)
{
    cout<<a;
}

int main()
{
    int x = 10;
    int y = 20;
    sum(x,y);       //function call   (here x, y are arguments)

    swap(x,y);
    cout<<x<<y<<"\n";

    // cout<<plus(x)<<"\n";
    double a = 2.5;
    double b = 3.5;
    cout<<add(a,b)<<"\n";
    add();

}

