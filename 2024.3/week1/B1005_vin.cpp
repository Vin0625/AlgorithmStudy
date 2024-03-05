#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T;//테스트 케이스 개수
    int N;//건물의 개수
    int K;//규칙 순서 개수
    vector<int> D;//각 건물당 걸리는 시간
    vector<vector<int>> rule;
    int W;//승리 건물 번호
    vector<int> check;//건물이 지어졌는지 여부
    vector<int> answer;

    cin>>T;

    for(int i=0;i<T;i++){
        cin>> N >> K;

        for(int j=0;j<N;j++){
            cin>> D[j];
        }

        for(int j=0;j<K;j++){
            cin>>rule[j][0]>>rule[j][1];
        }
        
        cin >>W;
    //여기까지 정보 입력 받기
    //최장거리 구하기 문제
    
    
    
    
    }
}