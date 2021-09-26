#include <bits/stdc++.h>
using namespace std;

float Area(int a, int b, int c)
{

  if ((a < 0) || (b < 0) || (c < 0) || (a + b <= c) || (a + c <= b) || (b + c <= a))
  {
    return -1;
  }

  float s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {

    int a, b, c;
    cin >> a >> b >> c;

    float area = Area(a, b, c);

    if ((area > 0) && (pow(2, a) + pow(2, b) == pow(2, c)))
      cout << "YES";

    else if ((area > 0) && (pow(2, c) + pow(2, a) == pow(2, b)))
      cout << "YES";

    else if ((area > 0) && (pow(2, b) + pow(2, c) == pow(2, a)))
      cout << "YES";

    else
      cout << "NO";

    cout << endl;
  }
  return 0;
}