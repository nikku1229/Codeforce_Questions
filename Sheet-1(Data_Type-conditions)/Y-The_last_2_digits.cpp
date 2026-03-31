#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  a = a % 100;
  b = b % 100;
  c = c % 100;
  d = d % 100;

  int multiply = a * b * c * d;

  if (multiply == 0){
    cout << "00";
  }else{
    string s = to_string(multiply);
    cout << s[s.size() - 2] << s[s.size() - 1];
  }
  return 0;
}