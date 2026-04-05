#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int result = 0;

  for(int i = 1; i <= n; i++){
    int sum = 0;
    int temp = i;

    while(temp != 0){
      int last = temp % 10;
      sum += last;
      temp /= 10;
    }

    if((sum >= a && sum <= b) || (sum >= b && sum <= a)){
      result += i;
    }
  }

  cout << result;
  return 0;
}