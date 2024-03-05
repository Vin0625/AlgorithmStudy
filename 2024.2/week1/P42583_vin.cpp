#include <algorithm>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weight) {
    int answer = 0;
    int cur_bri_wei=0;
    int size = truck_weight.size();
    queue<int> bridge;//다리위에 있는 트럭
    int after=0;
    vector<int> truck(truck_weight);//출발전 트럭
    // 다리위에서 트럭별 이동 시간을 나타낼 수 있는 변수가 필요함
    vector<int> run;//트럭이동시간

    bridge.push(truck.front());
    cur_bri_wei += truck.front();
    truck.erase(truck.begin());
    run.push_back(1);
    answer++;
    truck.shrink_to_fit();

    while (after != size) {
        // 트럭이 빠져나가는 로직
        if (!run.empty()) {
            if (run.front() == bridge_length) {
                after++;
                cur_bri_wei = cur_bri_wei - bridge.front();
                run.erase(run.begin());
                bridge.pop();

            }
        }
       
        // 트럭을 추가하는 로직
        if (!truck.empty()) {
            
                if (weight+1 > truck.front() + cur_bri_wei) {
                    bridge.push(truck.front());
                    cur_bri_wei += truck.front();
                    truck.erase(truck.begin());
                    run.push_back(0);
                    truck.shrink_to_fit();
                  
                }
            
        }
        
        // 트럭이 이동하는 로직
        for (int i = 0; i < bridge.size(); i++) {
            run[i]++;
        }
        answer++;
    }

    return answer;
}


