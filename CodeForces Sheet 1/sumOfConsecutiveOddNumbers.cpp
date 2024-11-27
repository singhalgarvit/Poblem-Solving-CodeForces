#include<iostream>
using namespace std;

int consecutiveOdd(int a,int b){
    int sum=0;
    for(int i=a+1;i<b;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    return sum;
}

int max(int a,int b){
    return (a<b)?consecutiveOdd(a,b):consecutiveOdd(b,a);
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        cout<<max(a,b);
        cout<<endl;
    }
    return 0;
}