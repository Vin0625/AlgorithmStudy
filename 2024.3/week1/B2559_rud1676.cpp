
#include <bits/stdc++.h>

using namespace std;

vector<int> sarr;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  // 누적합
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int on;
    cin >> on;
    sum += on;
    sarr.push_back(sum);
  }

  // 누적합 - 구간 해주면 구간 합나옴
  int mx = sarr[m - 1];
  for (int i = m; i < n; i++) {
    mx = max(sarr[i] - sarr[i - m], mx);
  }
  cout << mx << endl;
  return 0;
}
