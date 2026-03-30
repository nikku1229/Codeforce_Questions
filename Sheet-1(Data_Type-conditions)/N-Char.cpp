#include <bits/stdc++.h>
using namespace std;

int main() {
  char x;
  cin >> x;

  if(int(x) >= 97){
    cout << char(x - 32);
  }else{
    cout << char(x+32);
  }
  return 0;
}