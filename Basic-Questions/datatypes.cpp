/*
#include <iostream>
using namespace std;

void dataTypes(int, float, double, long long, string);

//User function Template for C++

// Function to check and print data types accordingly
void dataTypes(int a, float b, double c, long long l, string d)
{

    // Some statements have been given to you
    // to help you understand data types
    // Please complete the same for correct result
    // Or you can delete and write your own
    float p = b / c; //do b/c

    double q = b / a; //do b/a

    int r = c / a; //do c/a

    long long m = r + l; //do r+l

    cout << p << " " << q << " " << r << " " << m << endl;

    cout << d << " " << d[3] << endl; //write 3 for index
}

// { Driver Code Starts.

int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;

    int t;
    cin >> t;

    while (t--)
    {

        cin >> a >> b >> c >> l >> d;

        dataTypes(a, b, c, l, d);
    }

    return 0;
} // } Driver Code Ends
// Check size of data type
*/

#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(unsigned long long int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(unsigned char) << endl;
    cout << sizeof(signed char) << endl;
    cout << sizeof(wchar_t) << endl;
    cout << sizeof(bool) << endl;
    return 0;
}