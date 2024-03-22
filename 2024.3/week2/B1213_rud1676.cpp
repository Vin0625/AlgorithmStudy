#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;
  int arr[26] = {
      0,
  };
  for (const char &ch : s) {
    arr[ch - 'A']++;
  }

  bool falsig = false;
  char center = NULL;
  string result = "";

  for (int i = 0; i < 26; i++) {
    if (arr[i] == 0)
      continue;
    for (int j = 0; j < arr[i] / 2; j++) {
      result.push_back('A' + i);
    }

    if (arr[i] % 2 && s.size() % 2) {
      if (falsig) {
        cout << "I'm Sorry Hansoo" << '\n';
        return 0;
      }
      falsig = true;
      center = 'A' + i;
    }
    if (s.size() % 2 == 0 && arr[i] % 2) {
      cout << "I'm Sorry Hansoo" << '\n';
      return 0;
    }
  }
  string origin = result;
  reverse(result.begin(), result.end());
  if (center)
    cout << origin + center + result << '\n';
  else
    cout << origin + result << '\n';

  return 0;
}
