#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0;
    int check = 0;
    cin >> num;
    int alpah[26] = { 0 };
    string name[150];
    for (int i = 0; i < num; i++) {
        cin >> name[i];
        switch (name[i][0]) {
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
        if (alpah[i] > 4) {
            check = 1;
            if (i == 0) {
                cout << "a";
            }
            else if (i == 1) {
                cout << "b";
           }
            else if (i == 2) {
                cout << "c";
            }
            else if (i == 3) {
                cout << "d";
            }
            else if (i == 4) {
                cout << "e";
            }
            else if (i == 5) {
                cout << "f";
            }
            else if (i == 6) {
                cout << "g";
            }
            else if (i == 7) {
                cout << "h";
            }
            else if (i == 8) {
                cout << "i";
            }
            else if (i == 9) {
                cout << "j";
            }
            else if (i == 10) {
                cout << "k";
            }
            else if (i == 11) {
                cout << "l";
            }
            else if (i == 12) {
                cout << "m";
            }
            else if (i == 13) {
                cout << "n";
            }
            else if (i == 14) {
                cout << "o";
            }
            else if (i == 15) {
                cout << "p";
            }
            else if (i == 16) {
                cout << "q";
            }
            else if (i == 17) {
                cout << "r";
            }
            else if (i == 18) {
                cout << "s";
            }
            else if (i == 19) {
                cout << "t";
            }
            else if (i == 20) {
                cout << "u";
            }
            else if (i == 21) {
                cout << "v";
            }
            else if (i == 22) {
                cout << "w";
            }
            else if (i == 23) {
                cout << "x";
            }
            else if (i == 24) {
                cout << "y";
            }
            else if (i == 25) {
                cout << "z";
            }
        }
    }
    if (check == 0) {
        cout << "PREDAJA";
    }
}
