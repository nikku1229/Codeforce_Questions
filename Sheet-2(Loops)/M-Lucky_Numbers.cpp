#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, temp = 0;
  cin >> a >> b;
  vector<int> store;

  for (int i = a; i <= b; i++){
    int c = 0;
    int replace = i;

    while (replace != 0){
      int last_digit = replace % 10;
      if (last_digit != 4 && last_digit != 7){
        c++;
      }
      replace = replace / 10;
    }

    if (c == 0){
      store.push_back(i);
      temp++;
    }
  }

  if (temp == 0) cout << "-1";
  else{
    for (int k = 0; k < store.size(); k++){
      cout << store[k] << " ";
    }
  }
  return 0;
}