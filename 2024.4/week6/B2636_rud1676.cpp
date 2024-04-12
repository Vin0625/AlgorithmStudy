
#include <bits/stdc++.h>

using namespace std;

int n, m;
int mp[101][101];
int vst[101][101];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || nx < 0 || ny >= n || nx >= m || vst[ny][nx])
      continue;
    vst[ny][nx] = 1;
    if (mp[ny][nx] == 1) {
      mp[ny][nx] = -1;
      continue;
    }
    dfs(ny, nx);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mp[i][j];
    }
  }

  int cnt = 0;
  int count = 0;
  while (1) {
    memset(vst, 0, sizeof(vst));
    dfs(0, 0);
    count++;
    bool ck = false;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (mp[i][j] == -1) {
          if (!ck)
            cnt = 0;
          cnt++;
          ck = true;
          mp[i][j] = 0;
        }
      }
    }
    if (!ck)
      break;
  }
  cout << count - 1 << '\n' << cnt << '\n';
  return 0;
}
