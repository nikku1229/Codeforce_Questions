#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++){
    int b;
    cin >> b;
    v.push_back(b);
  }

  int item;
  cin >> item;
  int loc = -1;

  for (int i = 0; i < n; i++){
    if (item == v[i]){
      loc = i;
      break;
    }
  }
  cout << loc;
  return 0;
}