#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (((a % 10) + (b % 10)) / 10 == 0){
    cout << (a % 10) + (b % 10);
  }else{
    cout << ((a % 10) + (b % 10)) % 10;
  }
}