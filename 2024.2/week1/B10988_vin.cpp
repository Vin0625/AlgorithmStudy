#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string::reverse_iterator rit;
    string::iterator it;
    cin >> word;
    it = word.begin();
    for (rit = word.rbegin(); rit != word.rend(); rit++) {
        if (*rit != *it) {
            cout << 0;
            return 0;
        }
        it++;
    }
    cout << 1;
}
