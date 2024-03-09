#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  int n = 0;
  int ans = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    stack<char> st;

    // 안쪽에서 아치가 만들어져도 됨.
    bool check = true;
    for (char &ch : s) {
      if (st.empty() || st.top() != ch) {
        st.push(ch);
      } else if (st.top() == ch) {
        st.pop();
      }
    }
    if (check && st.empty())
      ans++;
  }
  cout << ans << endl;
  return 0;
}
