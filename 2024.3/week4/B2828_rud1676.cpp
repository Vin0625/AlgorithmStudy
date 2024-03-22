#include <bits/stdc++.h>

using namespace std;

int n, m;
int k;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> m;

  cin >> k;

  int l = 1;
  int r = l + m - 1;
  int ans = 0;
  for (int i = 0; i < k; i++) {
    int num;
    cin >> num;

    if (num < l) {
      ans += (l - num);
      l = num;
      r = l + m - 1;
    } else if (num > r) {
      ans += (num - r);
      r = num;
      l = r - m + 1;
    }
  }
  cout << ans << '\n';
  return 0;
}
