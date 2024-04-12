
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> mp[55];
int root;

int dfs(int node) {
  int child = 0;
  int ret = 0;
  for (int no : mp[node]) {
    if (no == m)
      continue;
    ret += dfs(no);
    child++;
  }
  if (child == 0)
    return 1;
  return ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    int t = 0;
    cin >> t;
    if (t == -1) {
      root = i;
      continue;
    }
    mp[t].push_back(i);
  }
  cin >> m;
  // root와 m이 같은경우를 안해줫네
  if (m == root)
    cout << 0 << '\n';
  else
    cout << dfs(root) << '\n';
  return 0;
}
