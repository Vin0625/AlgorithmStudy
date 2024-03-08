
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  while (scanf("%d", &n) != EOF) {
    int cnt = 1;
    long long int num = 1;
    while (true) {
      if ((num = num % n) == 0)
        break;
      num = num * 10 + 1;
      cnt++;
    }
    cout << cnt << '\n';
  }

  return 0;
}
