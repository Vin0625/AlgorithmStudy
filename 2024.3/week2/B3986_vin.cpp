#include <iostream>
#include <stack>

using namespace std;

int main(){
    int N;
    int answer=0;
    string AB;

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>AB;
        if(AB.length()%2==0){
            stack<char> check;
            for(int j=0;j<AB.length();j++){
                if(check.empty()){
                    check.push(AB[j]);
                }else if(check.top()==AB[j]){
                    check.pop();
                }else{
                    check.push(AB[j]);
                }
                
            }
            if(check.empty()){
                answer++;
            }
        }
    }
    
    cout<<answer;
}