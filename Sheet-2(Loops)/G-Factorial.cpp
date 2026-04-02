#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  while (n--){
    int f;
    cin >> f;
    
    if (f == 0 || f == 1) cout << "1" << endl;
    else{
      long long int result = 1;

      for (int i = 2; i <= f; i++){
        result *= i;
      }
      
      cout << result << endl;
    }
  }
  return 0;
}