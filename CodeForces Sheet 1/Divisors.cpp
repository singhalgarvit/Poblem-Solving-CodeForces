#include<iostream>
using namespace std;

int divisor(int N){
    for(int i=1;i<=N;i++){
        if(N%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

int main(){
    int N;
    cin>>N;
    divisor(N);
    return 0;
}