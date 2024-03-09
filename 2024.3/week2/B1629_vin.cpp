#include <iostream>
#include <math.h>

using namespace std;

int A,B,C;

long long moduler(long long num){
    if(num==1){
        return A%C;
    }
    long long D=moduler(num/2)%C;
    if(num%2==0){
        return D*D%C;
    }else{
        return D*D%C*(A%C);
    }

}

int main(){
	cin>> A >> B >> C;

    cout<<moduler(B)%C;
}