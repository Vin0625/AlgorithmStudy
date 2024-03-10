
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;

  long long int sum = 0;
  map<int, vector<int>> mp;

  long long int ans = 0;
  for (int i = 0; i < n; i++) {
    // 원래 배열의 나머지 저장
    long long int num = 0;
    cin >> num;
    sum = (sum + num) % m;

    mp[sum].push_back(i);
  }

  // 구간합자체 나머지가 0인경우
  long long int ss = mp[0].size();
  ans = ss + ss * (ss - 1) / 2;
  // 나머지같은거 빼면 0 나오는 경우
  for (int i = 1; i < m; i++) {
    long long int s = mp[i].size();
    if (s != 0)
      ans += (s * (s - 1) / 2);
  }
  cout << ans << endl;
}
