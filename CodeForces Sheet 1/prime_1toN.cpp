#include<iostream>
using namespace std;

bool primeNumbers(int N){
    for(int i=2;i<=N/2;i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cin>>N;
    for(int i=2;i<=N;i++){
    if(primeNumbers(i)){
        cout<<i<<" ";
    }
    }
    return 0;
}