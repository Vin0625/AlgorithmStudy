#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    string half="";
    char odd;
    string answer;
    int check=0;
    int aplha[26]={0};

    cin >> S;
    for(int i=0; i<S.size();i++){
        aplha[S[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(aplha[i]==0){

        }else if(aplha[i]%2==0){
            for(int j=0;j<aplha[i]/2;j++){
                half+=('A'+i);
            }
        }else{
            check++;
            odd=('A'+i);
            for(int j=0;j<aplha[i]/2;j++){
                half+=('A'+i);
            }
        }
    }
    
    if(check>1){
        cout<<"I'm Sorry Hansoo";
        return 0;
    }else{
    
    answer=half;
    if(check==1){
    answer+=odd;
    }

    for(int i=half.size();i>0;i--){
        answer+=half[i-1];
    }

    cout<<answer;
    }
}