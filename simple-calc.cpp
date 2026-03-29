#include <bits/stdc++.h>
using namespace std;

long long int sum(long long int a, long long int b)
{
  long long int c = a + b;
  return c;
}

long long int sub(long long int a, long long int b)
{
  return a - b;
}

long long int mul(long long int a, long long int b)
{
  long long int c = a * b;
  return c;
}

int main()
{
  long long int a, b;
  cin >> a >> b;

  cout << a << "+" << b << "=" << sum(a, b) << endl;
  cout << a << "-" << b << "=" << sub(a, b) << endl;
  cout << a << "*" << b << "=" << mul(a, b);
}