
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

unordered_map<ll, ll> mp;
vector<ll> v;
ll n, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    ll num = 0;
    cin >> num;
    mp[num]++;
    v.push_back(num);
  }

  map<ll, vector<ll>, greater<ll>> st;

  for (auto it : mp) {
    st[it.second].push_back(it.first);
  }

  for (auto it : st) {
    map<ll, ll> mpmp;
    auto vec = it.second;
    for (int i = 0; i < vec.size(); i++) {
      mpmp[find(v.begin(), v.end(), vec[i]) - v.begin()] = vec[i];
    }
    for (auto itit : mpmp) {
      for (ll i = 0; i < it.first; i++) {
        cout << itit.second << " ";
      }
    }
  }
  cout << '\n';
  return 0;
}
