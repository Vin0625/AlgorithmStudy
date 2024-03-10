#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
    int N,M;
    string S;
    vector<string> poketbook;
    vector<string> answer;
    map<string, int> poketlist;
    cin>>N>>M;

    cin.tie(0);
	ios::sync_with_stdio(0);

    for(int i=0;i<N;i++){
        cin>>S;
        poketbook.push_back(S);
        poketlist.insert(pair<string,int>(S,i+1));
    }

    for(int i=0;i<M;i++){
        cin>>S;
        if(S[0]>='0'&&S[0]<='9'){
            answer.push_back(poketbook[stoi(S)-1]);
        }else{
                answer.push_back(to_string(poketlist[S]));

            }
        }
    
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<'\n';
    }
}