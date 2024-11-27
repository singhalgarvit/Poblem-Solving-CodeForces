#include<iostream>
using namespace std;

int construct(int n,int s){
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<sum;j++){
            sum +=j;
            if(sum>s){
                sum -=j;
                break;
            }
        }
    }
    return 0;
}

int main(){
     int N;
     cin>>N;
     int n,s;
     for(int i=0;i<N;i++){
        cin>>n>>s;
        construct(n,s);
     }
    return 0;
}