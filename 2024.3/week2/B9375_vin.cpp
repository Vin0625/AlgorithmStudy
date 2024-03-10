#include <iostream>
#include <map>

using namespace std;

int main(){
    int T,n;
    string wear,kind;
    cin>>T;
    for(int i=0;i<T;i++){
        map<string,int> map;
        int answer=1;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>wear>>kind;
            if(map.find(kind)==map.end()){
                map.insert(pair<string,int>(kind,1));
            }else{
                map[kind]++;
            }
        }
        for(auto i=map.begin();i!=map.end();i++){
        answer=answer*((i->second)+1);
        }
        cout<<answer-1<<'\n';
    }

}