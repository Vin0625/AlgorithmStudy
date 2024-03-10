#include <iostream>
#include <vector>

using namespace std;

int main(){
    int answer=0;
    int num;
    int N,M;
    vector<int> source;

    cin>>N;
    cin>>M;
    for(int i=0;i<N;i++){
        cin>>num;
        source.push_back(num);
    }

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(source[i]+source[j]==M){
                answer++;
                break;
            }
        }
    }

    cout<<answer;
}