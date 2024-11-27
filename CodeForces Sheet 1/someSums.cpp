#include<iostream>
using namespace std;

bool checkSum(int i,int A,int B){
    int unit,sum=0;
    while(i!=0){
        unit=i%10;
        sum+=unit;
        i=i-unit;
        i=i/10;
    }
    return (sum>=A && sum<=B)?true:false;
}

int max(int i,int A,int B){
    return (A<B)?checkSum(i,A,B):checkSum(i,B,A);
}

int main(){
    int N,A,B,sum=0;
    cin>>N>>A>>B;
    for(int i=1;i<=N;i++){
        if(max(i,A,B)){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}