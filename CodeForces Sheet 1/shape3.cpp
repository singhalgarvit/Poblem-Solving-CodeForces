#include<iostream>
using namespace std;

int shape1(int N){
    for(int i=1;i<=N;i++){
        for(int j=N-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int shape2(int N){
    for(int i=N;i>=1;i--){
        for(int k=0;k<N-i;k++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int N;
    cin>>N;
    shape1(N);
    shape2(N);
    return 0;
}