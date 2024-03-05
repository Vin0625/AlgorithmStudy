#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    getline(cin,S);
    
    for(int i=0;i<S.size();i++){
        if(S[i]>='A'&&S[i]<='Z'){
            if(S[i]+13>'Z'){
                S[i]-=13;
            }else{
                S[i]+=13;
            }
        }else if(S[i]>='a'&&S[i]<='z'){
            if(S[i]+13>'z'){
                S[i]-=13;
            }else{
                S[i]+=13;
            }
        }
    }
    
    cout<<S;
}