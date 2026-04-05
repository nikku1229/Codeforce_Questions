#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while (t--){
    int x, y;
    cin >> x >> y;

    if (x > y){
      long long int sum = 0;

      for (int i = y + 1; i < x; i++){
        if (i % 2 != 0){
          sum = sum + i;
        }
      }
      cout << sum;
    }else{
      long long sum = 0;

      for (int i = x + 1; i < y; i++){
        if (i % 2 != 0){
          sum = sum + i;
        }
      }
      cout << sum;
    }
    cout << endl;
  }
  return 0;
}