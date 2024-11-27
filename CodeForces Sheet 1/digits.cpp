#include<iostream>
using namespace std;

int seperate(int num){
    if(num == 0){
        cout<<0<<endl;
        return 0;
    }
    while(num!=0){
        int unit=num%10;
        cout<<unit<<" ";
        num=num-unit;
        num=num/10;
    }
    cout<<endl;
    return 0;
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        seperate(num);
    }
    return 0;
}