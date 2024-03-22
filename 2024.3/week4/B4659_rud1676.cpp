
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string str = "";

bool ck(char s) {
  if (s == 'o')
    return true;
  if (s == 'i')
    return true;
  if (s == 'e')
    return true;
  if (s == 'u')
    return true;
  if (s == 'a')
    return true;
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (1) {
    bool accept = true;
    cin >> str;
    if (str == "end")
      return 0;

    if (str.find("a") == string::npos && str.find("i") == string::npos &&
        str.find("o") == string::npos && str.find("u") == string::npos &&
        str.find("e") == string::npos) {
      accept = false;
    }

    if (str.size() >= 3) {
      for (int i = 0; i < str.size() - 2; i++) {
        bool a = ck(str[i]);
        bool b = ck(str[i + 1]);
        bool c = ck(str[i + 2]);
        if (a == b && b == c) {
          accept = false;
          break;
        }
      }
    }
    if (str.size() >= 2) {
      for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1] && str[i] != 'e' && str[i] != 'o') {
          accept = false;
        }
      }
    }

    if (accept)
      cout << "<" << str << "> is acceptable." << '\n';
    else
      cout << "<" << str << "> is not acceptable." << '\n';
  }

  return 0;
}
