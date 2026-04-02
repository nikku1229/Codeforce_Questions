#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, max = INT_MIN;
  cin >> a >> b;

  if(a % b == 0) cout << b;
  else if(b % a == 0) cout << a;
  else{
    for(int i = 1; i <= a && i <= b; i++){
      if(a % i == 0 && b % i == 0 && i >= max) max = i; 
    }
    cout << max;
  } 
  return 0;
}