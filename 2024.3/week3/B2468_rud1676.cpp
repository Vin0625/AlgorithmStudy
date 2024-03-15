#include <bits/stdc++.h>
using namespace std;

int mp[101][101];
int vst[101][101];
int mn = 101, mx = -1;
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};
int n;

void dfs(int y, int x, int height) {
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n || vst[ny][nx] ||
        mp[ny][nx] <= height)
      continue;
    vst[ny][nx] = 1;
    dfs(ny, nx, height);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int num;
      cin >> num;
      mp[i][j] = num;
      mn = min(mn, num);
      mx = max(mx, num);
    }
  }
  int ans = 1;

  for (int h = mn; h <= mx; h++) {
    memset(vst, 0, sizeof(vst));
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (vst[i][j] == 0 && mp[i][j] > h) {
          vst[i][j] = 1;
          dfs(i, j, h);
          cnt++;
        }
      }
    }
    ans = max(cnt, ans);
  }
  cout << ans << endl;
}
