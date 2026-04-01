#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, max = INT_MIN;
  cin >> n;

  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;

    if(temp >= max){
      max = temp;
    }
  }
  cout << max;
  return 0;
}