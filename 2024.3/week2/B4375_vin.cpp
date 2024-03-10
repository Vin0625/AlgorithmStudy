#include <iostream>

using namespace std;

int main(){
    int n;
    int num;
    int answer;
    while(cin>>n){
        answer=1;
        num=1;
        while(num%n!=0){
            num=(num*10)%n+1%n;
            answer++;
        }
        cout<<answer<<"\n";
    }
}