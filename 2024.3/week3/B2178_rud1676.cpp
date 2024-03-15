
#include <bits/stdc++.h>
using namespace std;
int mp[1000][1000];
int vst[1000][1000];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%1d", &mp[i][j]);
    }
  }

  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));
  int cnt = 0;

  while (q.size()) {
    int s = q.size();
    cnt++;
    while (s--) {
      auto it = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int ny = it.first + dy[i];
        int nx = it.second + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m || mp[ny][nx] == 0 ||
            vst[ny][nx])
          continue;

        vst[ny][nx] = 1;
        if (ny == n - 1 && nx == m - 1) {
          cout << cnt + 1 << '\n';
          return 0;
        }
        q.push(make_pair(ny, nx));
      }
    }
  }
  cout << cnt << '\n';
  return 0;
}
