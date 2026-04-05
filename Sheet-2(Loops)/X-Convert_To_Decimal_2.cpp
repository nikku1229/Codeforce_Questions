#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--){
    int n;
    cin >> n;
    int temp = 0, i = 0;

    while (n > 0){
      int rem = n % 2;
      if (rem == 1){
        temp = temp + pow(2, i);
        i++;
      }
      n = n / 2;
    }
    cout << temp << endl;
  }
  return 0;
}