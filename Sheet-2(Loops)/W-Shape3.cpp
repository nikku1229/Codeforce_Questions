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

    for (int k = n - i - 1; k < n + i; k++){
      cout << "*";
    }

    cout << endl;
  }

  for (int i = 0; i < n; i++){
    for (int k = 0; k < i; k++){
      cout << " ";
    }

    for (int j = 2 * (n - i) - 1; j > 0; j--){
      cout << "*";
    }

    cout << endl;
  }
  return 0;
}