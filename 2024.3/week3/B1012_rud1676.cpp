#include <bits/stdc++.h>
using namespace std;
int mp[1000][1000];
int vst[1000][1000];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int row, col, k;

void dfs(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || nx < 0 || ny >= col || nx >= row || vst[ny][nx] ||
        mp[ny][nx] == 0)
      continue;
    vst[ny][nx] = 1;
    dfs(ny, nx);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 0;
  cin >> t;
  while (t--) {
    memset(vst, 0, sizeof(vst));
    memset(mp, 0, sizeof(mp));
    cin >> row >> col >> k;

    for (int i = 0; i < k; i++) {
      int y, x;
      cin >> x >> y;
      mp[y][x] = 1;
    }

    int ans = 0;
    for (int i = 0; i < col; i++) {
      for (int j = 0; j < row; j++) {
        if (mp[i][j] == 1 && vst[i][j] == 0) {
          vst[i][j] = 1;
          dfs(i, j);
          ans++;
        }
      }
    }

    cout << ans << '\n';
  }
}
