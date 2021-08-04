#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, x;
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) != ' ') {
      x += s.at(i);
    }
  }
  cout << x;
}