#include<iostream>
using namespace std;

long long rangeSum(long long a,long long int b){
    long long sum;
    sum=(b*(b+1)/2)-(a*(a+1)/2);
    return sum+a;
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        long long a,b;
        cin>>a>>b;
        long long sum=(a<b)?rangeSum(a,b):rangeSum(b,a);
        cout<<sum<<endl;
    }
    return 0;
}