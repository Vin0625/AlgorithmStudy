
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> mp[10001];

int vst[10001] = {
    0,
};

int dfs(int node) {

  int ret = 1;
  for (auto v : mp[node]) {
    if (vst[v])
      continue;
    vst[v] = 1;
    ret += dfs(v);
  }
  return ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    mp[b].push_back(a);
  }

  int mx = 0;
  int result[10001] = {
      0,
  };
  for (int i = 0; i <= n; i++) {
    memset(vst, 0, sizeof(vst));
    vst[i] = 1;
    result[i] = dfs(i);
    mx = max(mx, result[i]);
  }

  for (int i = 0; i <= n; i++) {
    if (result[i] == mx) {
      cout << i << " ";
    }
  }
  return 0;
}
