#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    string pattern;
    string before, after;

    cin>>N;
    cin>>pattern;

    vector<string> S(N);

    for(int i=0;i<N;i++){
        cin>>S[i];
    }

    //*를 기준으로 왼쪽 오른쪽을 나누는 과정
    for(int i=0;i<pattern.size();i++){
        if(pattern[i]=='*'){
            before=pattern.substr(0,i);
            after=pattern.substr(i+1);
            break;
        }
    }
    //패턴에 부합하는지 판단
    for(int i=0;i<N;i++){
        if(S[i].size()<pattern.size()-1){
            S[i]="NE";
        }else{
        if(S[i].find(before)==0&&after==S[i].substr(S[i].size()-after.size())){
            S[i]="DA";
        }else{
            S[i]="NE";
        }
        }
    }

    for(int i =0;i<N;i++){
        cout<<S[i]<<endl;
    }
}