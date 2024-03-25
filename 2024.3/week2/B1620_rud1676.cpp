
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  // 필수템
  // c언어랑 스트림차이나는거 방지되는데 그거 걍 꺼주는거
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  vector<string> mp1;
  map<string, int> mp2;
  string s;
  int n, m;

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> s;
    mp1.push_back(s);
    mp2[s] = i + 1;
  }

  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    const int idx = atoi(s.c_str());
    // endl 대신에 '\n'
    if (idx)
      cout << mp1[idx - 1] << '\n';
    else
      cout << mp2[s] << '\n';
  }
  return 0;
}
