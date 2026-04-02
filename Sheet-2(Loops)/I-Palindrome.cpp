#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, rev = 0;
  cin >> n;
  int a = n;

  for (int i = 0; n != 0; i++){
    int last_digit = n % 10;
    rev = rev * 10 + last_digit;
    n = n / 10;
  }

  if (rev == a){
    cout << rev << endl << "YES";
  }else{
    cout << rev << endl << "NO";
  }
  return 0;
}