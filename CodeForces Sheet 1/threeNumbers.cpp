#include<iostream>
using namespace std;

int main(){
    int K,S;
    cin>>K>>S;
    int count=0 ;
    for(int i=0;i<=K;i++){
        for(int j=0;j<=i;j++){
            for(int k=0;k<=j;k++){
                if(i+j+k == S){
                    count++;
                }
            }
        }
    }
    cout<<count*3;
    return 0;
}