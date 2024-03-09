#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  int answer = 0;
  vector<int> arr;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    arr.push_back(num);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == m)
        answer++;
    }
  }

  cout << answer << '\n';
  return 0;
}
