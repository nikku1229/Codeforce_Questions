#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--){
    int n;
    cin >> n;

    if (n == 0){
      cout << 0;
    }else{
      while (n != 0){
        int last_digit = n % 10;
        cout << last_digit << " ";
        n = n / 10;
      }
    }
    cout << endl;
  }
  return 0;
}