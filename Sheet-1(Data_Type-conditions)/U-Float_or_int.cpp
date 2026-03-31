#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string x;
  int loc = 0;

  for (int i = 0; s[i] != '.'; i++){
    loc = i + 2;
  }

  int c = 0;
  for (int i = loc; i < s.size(); i++){
    if (s[i] != '0'){
      for (int i = loc; i < s.size(); i++){
        x = x + s[i];
      }
      c++;
      cout << "float" << " " << stoi(s) << " " << "0." << x;
      break;
    }
  }
  if (c == 0){
    cout << "int" << " " << stoi(s);
  }
  return 0;
}