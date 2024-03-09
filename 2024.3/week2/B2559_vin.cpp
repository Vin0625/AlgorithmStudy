#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,K;
    int a;
    int tem[100000];
    int answer=-1000000;

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin>>N>>K;
    tem[0]=0;

    for(int i=1;i<N+1;i++){
        cin>>a;
        tem[i]=tem[i-1]+a;
    }

    for(int i=0;i<N-K+1;i++){
        answer=max(answer,tem[i+K]-tem[i]);
    }

    cout<<answer;
}