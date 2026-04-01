#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, even = 0, odd = 0, pos = 0, neg = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;

    if(temp % 2 ==0){
      even++;
    }else{
      odd++;
    }

    if(temp < 0){
      neg++;
    }else if(temp > 0){
      pos++;
    }
  }

  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << pos << endl;
  cout << "Negative: " << neg;
  return 0;
}