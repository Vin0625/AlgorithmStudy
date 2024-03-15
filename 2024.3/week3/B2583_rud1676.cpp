
#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int mp[101][101];
int vst[101][101];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int dfs(int y, int x) {
  int ret = 1;
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= m || ny >= n || vst[ny][nx] ||
        mp[ny][nx] == 1)
      continue;
    vst[ny][nx] = 1;
    ret += dfs(ny, nx);
  }
  return ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m >> k;

  for (int i = 0; i < k; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    for (int c = y1; c < y2; c++) {
      for (int r = x1; r < x2; r++) {
        mp[c][r] = 1;
      }
    }
  }
  // 맵을 그렸습니다.

  int area = 0;
  vector<int> asize;
  for (int c = 0; c < n; c++) {
    for (int r = 0; r < m; r++) {
      if (mp[c][r] == 0 && vst[c][r] == 0) {
        area++;
        vst[c][r] = 1;
        int ret = dfs(c, r);
        asize.push_back(ret);
      }
    }
  }
  sort(asize.begin(), asize.end());
  cout << area << endl;
  for (int n : asize) {
    cout << n << " ";
  }
  cout << endl;

  return 0;
}
