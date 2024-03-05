#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> tall(9);
    int result=0;
    for(int i=0; i<9;i++){
        cin>>tall[i];
        result+=tall[i];
    }

    for(int i=0;i<8;i++){
        for(int j=1;j<9;j++){
            if(result-tall[i]-tall[j]==100){
                for(int k=0;k<9;k++){
                    if(k!=i&&k!=j){
                        cout<<tall[k]<<endl;
                    }
                }
                return 0;
            }
        }
    }

}
