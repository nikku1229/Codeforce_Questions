#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int temp = n;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < temp - 1; j++){
      cout << " ";
    }
    temp--;

    for (int k = n - i - 2; k < n + i - 1; k++){
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}