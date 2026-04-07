#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v;
  long long sum = 0;

  for (int i = 0; i < n; i++){
    int b;
    cin >> b;
    v.push_back(b);
    sum = sum + b;
  }

  if (sum >= 0){
    cout << sum;
  }else{
    long long temp = sum * (-1);
    cout << temp;
  }
  return 0;
}
