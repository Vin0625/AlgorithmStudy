#include <iostream>

using namespace std;

int main() {
    int arr[9];
    int n1 = 0;
    int n2 = 1;
    int result=0, temp=0;
		
		//숫자 9개 입력 받기
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
		
		//입력받은 숫자 정렬하기
    for (int i = 0; i < 8; i++) {
        if (arr[i] > arr[i + 1]) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = 0;
        }
    }
		//조건에 맞는 숫자 선택하기
    while (result != 100) {
        result = 0;
        if (n2 == 9) {
            n1++;
            n2 = n1 + 1;
        }
        for (int i = 0; i < 9; i++) {
            if (i != n1 && i!=n2) {
							result += arr[i];
            }
        }
        n2++;
    }
    n2--;
		//선택된 숫자 출력하기
    for (int i = 0; i < 9; i++) {
        if (i == n1) {
        }
        else if (i == n2) {
        }
        else {
            cout << arr[i]<<'\n';
        }
    }

}
