#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, s;
  cin >> k >> s;
  int ans = 0;
  int mini = min(k, s);

  for (int i = 0; i <= mini; i++){
    for (int j = 0; j <= mini; j++){

      int z = s - i - j;
      if (z >= 0 && z <= k){
        ans++;
      }
    }
  }
  cout << ans << endl;
}