#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  if (n == 1){
    cout << "0";
  }else{
    int f1 = 0;
    int f2 = 1;
    cout << f1 << " " << f2 << " ";

    for (int i = 0; i < n - 2; i++){
      int next = f1 + f2;
      cout << next << " ";
      f1 = f2;
      f2 = next;
    }
  }
  return 0;
}