#include<iostream>
using namespace std;

int sequence(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    return 0;
}

int max(int N,int M){
    return (N<M)?sequence(N,M):sequence(M,N);
}

int main(){
    int N,M;
    cin>>N>>M;
    while(N>0 && M>0){
        max(N,M);
        cin>>N>>M;
    }
    return 0;
}