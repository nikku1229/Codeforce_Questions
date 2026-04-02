#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  if (n == 3 || n == 2){
    cout << "YES";
  }else if (n % 2 == 0 || n == 1){
    cout << "NO";
  }else{

    for (int i = 3; i <= sqrt(n); i++){
      if (n % i == 0){
        cout << "NO";
        return 0;
      }
    }
    cout << "YES";
  }
  return 0;
}