
#include <bits/stdc++.h>

using namespace std;

int n, m;
stack<pair<int, int>> st;
int ans[1000001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int num = 0;
    cin >> num;
    while (st.size()) {
      auto t = st.top();
      if (t.first < num) {
        ans[t.second] = num;
        st.pop();
      } else
        break;
    }
    st.push({num, i});
  }

  while (st.size()) {
    auto t = st.top();
    ans[t.second] = -1;
    st.pop();
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << '\n';

  return 0;
}
