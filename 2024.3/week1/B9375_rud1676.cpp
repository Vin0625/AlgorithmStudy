
#include<bits/stdc++.h>

using namespace std;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr;
    map<string,int> cls;
    for(int i=0;i<n;i++){
      string _s, cl;
      cin >> _s >> cl;
      if(cls[cl]!=0) cls[cl]++;
      else cls[cl]=1;
    }

    for(const auto& [key,value] : cls){
      arr.push_back(value);
    }

    int result = 1;
    for(int it : arr){
      result *=(it+1); // 종류 + 안입음 이 선택사항 그걸 모두 곱한다.
    }
    cout << result-1<<endl; // 모두안입음을 빼준다.
  }
  return 0;

}
