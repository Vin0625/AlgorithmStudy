
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int n;
vector<string> v;
bool cmp(string a, string b) {
  if (a.size() > b.size())
    return false;
  else if (a.size() < b.size())
    return true;
  return a < b;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    string fn = "";

    for (int j = 0; j < str.size(); j++) {
      if (str[j] >= '0' && str[j] <= '9') {
        fn += str[j];
      } else if (fn.size() > 0) {
        if (fn.size() > 0) {
          // erase first 0
          string temp = "";
          bool f = true;
          for (int k = 0; k < fn.size(); k++) {
            if (fn[k] == '0' && f)
              continue;
            else {
              f = false;
              temp += fn[k];
            }
          }

          if (temp.size() > 0)
            v.push_back(temp);
          else
            v.push_back("0");
          fn = "";
        }
      }
    }
    if (fn.size() > 0) {
      // erase first 0
      string temp = "";
      bool f = true;
      for (int k = 0; k < fn.size(); k++) {
        if (fn[k] == '0' && f)
          continue;
        else {
          f = false;
          temp += fn[k];
        }
      }

      if (temp.size() > 0)
        v.push_back(temp);
      else
        v.push_back("0");
      fn = "";
    }
  }
  sort(v.begin(), v.end(), cmp);
  for (auto it : v) {
    cout << it << '\n';
  }
  return 0;
}
