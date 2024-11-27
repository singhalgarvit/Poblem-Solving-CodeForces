#include<iostream>
using namespace std;

int breakNumber(long long num){
    int Fx=0;
    while(num%2 ==0){
        Fx++;
        num=num/2;
    }
    return Fx;
}

int main(){
    int N,Max=0;
    cin>>N;
    for(int i=0;i<N;i++){
        long long num;
        cin>>num;
        int breaknum=breakNumber(num);
        if(breaknum>Max){
            Max=breaknum;
        }
    }
        cout<<Max;
    return 0;
}