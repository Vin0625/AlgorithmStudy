#include <iostream>
#include <string>

using namespace std;

int main() {
    int alpah[26] = {0};
    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        switch (word[i]) {
        case 'a':
            alpah[0]++;
            break;
        case 'b':
            alpah[1]++;
            break;
        case 'c':
            alpah[2]++;
            break;
        case 'd':
            alpah[3]++;
            break;
        case 'e':
            alpah[4]++;
            break;
        case 'f':
            alpah[5]++;
            break;
        case 'g':
            alpah[6]++;
            break;
        case 'h':
            alpah[7]++;
            break;
        case 'i':
            alpah[8]++;
            break;
        case 'j':
            alpah[9]++;
            break;
        case 'k':
            alpah[10]++;
            break;
        case 'l':
            alpah[11]++;
            break;
        case 'm':
            alpah[12]++;
            break;
        case 'n':
            alpah[13]++;
            break;
        case 'o':
            alpah[14]++;
            break;
        case 'p':
            alpah[15]++;
            break;
        case 'q':
            alpah[16]++;
            break;
        case 'r':
            alpah[17]++;
            break;
        case 's':
            alpah[18]++;
            break;
        case 't':
            alpah[19]++;
            break;
        case 'u':
            alpah[20]++;
            break;
        case 'v':
            alpah[21]++;
            break;
        case 'w':
            alpah[22]++;
            break;
        case 'x':
            alpah[23]++;
            break;
        case 'y':
            alpah[24]++;
            break;
        case 'z':
            alpah[25]++;
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << alpah[i] << " ";
    }
}
