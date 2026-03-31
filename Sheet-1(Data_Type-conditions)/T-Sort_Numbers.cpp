#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if(a >= b && a >= c && b >= c){ // abc, acb, bac, bca, cab, cba

    cout << c << endl << b << endl << a << endl;

  }else if(a >= b && a >= c && b <= c){

    cout << b << endl << c << endl << a << endl;

  }else if(b >= a && b >= c && a >= c){

    cout << c << endl << a << endl << b << endl;

  }else if(b >= a && b >= c && a <= c){

    cout << a << endl << c << endl << b << endl;

  }else if(c >= a && c >= b && a >= b){

    cout << b << endl << a << endl << c << endl;
    
  }else{
    
    cout << a << endl << b << endl << c << endl;

  }

  cout << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c;
  return 0;
}