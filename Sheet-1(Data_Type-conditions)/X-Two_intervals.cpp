#include <bits/stdc++.h>
using namespace std;

int main(){
  int l1, r1, l2, r2;
  int left, right;
  int c = 0;
  cin >> l1 >> r1 >> l2 >> r2;

  if (l2 >= l1 && l2 <= r1){
    left = l2;
    c = 1;
  }else if (l1 >= l2 && l1 <= r2){
    left = l1;
    c = 1;
  }

  if (r1 >= l2 && r1 <= r2){
    right = r1;
    c = 1;
  }else if (r2 >= l1 && r2 <= r1){
    right = r2;
    c = 1;
  }

  if (c == 0){
    cout << "-1";
  }else{
    cout << left << " " << right;
  }
  return 0;
}