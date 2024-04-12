
#include <bits/stdc++.h>

using namespace std;

int n, m;
int mp[10][10];
int mx = 0;

vector<pair<int, int>> em;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void bfs(int temp[][10], int y, int x) {
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= m || ny >= n || temp[ny][nx] != 0)
      continue;
    temp[ny][nx] = 2;
    bfs(temp, ny, nx);
  }
}

int go() {
  int temp[10][10];
  memcpy(temp, mp, sizeof(mp));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (temp[i][j] == 2)
        bfs(temp, i, j);
    }
  }
  // temp 바이러스 퍼짐
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (temp[i][j] == 0)
        cnt++;
    }
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mp[i][j];
      if (mp[i][j] == 0) {
        em.push_back(pair<int, int>(i, j));
      }
    }
  }
  for (int i = 0; i < em.size() - 2; i++) {
    for (int j = i + 1; j < em.size() - 1; j++) {
      for (int k = j + 1; k < em.size(); k++) {
        mp[em[i].first][em[i].second] = 1;
        mp[em[j].first][em[j].second] = 1;
        mp[em[k].first][em[k].second] = 1;
        mx = max(mx, go());
        mp[em[i].first][em[i].second] = 0;
        mp[em[j].first][em[j].second] = 0;
        mp[em[k].first][em[k].second] = 0;
      }
    }
  }
  cout << mx << endl;
}
