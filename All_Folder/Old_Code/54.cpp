#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  // get a integer
  int a;
  cin >> a;
  // get two integers separated with half-width break
  int b, c;
  cin >> b >> c;
  // get a string
  string s;
  cin >> s;
  // output
  cout << (a + b + c) << " " << s << endl;

  return 0;
}
