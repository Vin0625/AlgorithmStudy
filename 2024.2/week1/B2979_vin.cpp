#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    int start[3];
    int finish[3];
    int time[100] = {0};
    int result = 0;
		//필요한 정보들 입력받기
    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++) {
        cin >> start[i] >> finish[i];
        for (int j = start[i]; j < finish[i]; j++) {
            time[j - 1]++;
						//1~2에 해당하는 시간을 배열 0에 해당하는것으로 저장
        }
    }
		//요금 계산하기
    for (int i = 0; i < 100; i++) {
        if (time[i] == 1) {
            result += A;
        } else if (time[i] == 2) {
            result += B * 2;
        } else if (time[i] == 3) {
            result += C * 3;
        }
    }
		//출력
    cout << result;
}
