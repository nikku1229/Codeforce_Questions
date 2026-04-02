#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a;

  for (int i = 2; i <= n; i++){
    int c = 0;
    for (int j = 2; j < i; j++){
      if (i % j == 0){
        c++;
        break;
      }
    }
    if (c == 0){
      a.push_back(i);
    }
  }

  for (int i = 0; i < a.size(); i++){
    cout << a[i] << " ";
  }
  return 0;
}