#include <bits/stdc++.h>
using namespace std;

int main() {
  while(true){
    int n, m;
    cin >> n >> m;

    if(n <= 0 || m <= 0) break;
    else{
      int sum = 0, gn, ln;
      if(n < m){
        ln = n;
        gn = m;
      }else{
        ln = m;
        gn = n;
      }

      for(int i = ln; i <= gn; i++){
        sum += i;
        cout << i << " ";
      }
      cout << "sum =" << sum << endl; 
    }
  }
  return 0;
}