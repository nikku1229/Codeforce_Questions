#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string str = to_string(n);

  int size = str.size();

  if (n < 10)
  {
    (n % 2 == 0) ? cout << "EVEN" : cout << "ODD";
  }
  else
  {
    if ((n / (10 * (size - 1))) % 2 == 0)
    {
      cout << "EVEN";
    }
    else
    {
      cout << "ODD";
    }
  }
}