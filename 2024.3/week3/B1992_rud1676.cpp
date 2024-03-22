#include <bits/stdc++.h>

using namespace std;

int n;
char mp[101][101];

string go(int size, int y, int x) { // 왼쪽 위에 기준
  if (size == 1) {
    return string(1, mp[y][x]);
  }

  string str = "(";

  int ns = size / 2;
  string a = go(ns, y, x);
  string b = go(ns, y, x + ns);
  string c = go(ns, y + ns, x);
  string d = go(ns, y + ns, x + ns);
  // cout << endl << "ns : " << ns << endl;
  // cout << "a : " << a << endl;
  // cout << "b : " << b << endl;
  // cout << "c : " << c << endl;
  // cout << "d : " << d << endl;
  if (a == b && b == c && c == d && a.size() == 1 && b.size() == 1 &&
      c.size() == 1 && d.size() == 1)
    return a;
  str += a;
  str += b;
  str += c;
  str += d;
  str.push_back(')');
  return str;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%1s", &mp[i][j]);
    }
  }
  printf("%s\n", go(n, 0, 0).c_str());
}
