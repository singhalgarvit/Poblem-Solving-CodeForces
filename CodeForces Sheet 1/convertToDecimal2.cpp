#include<iostream>
using namespace std;

int pow(int a , int b){
    int ans=a;
    if(b==0){
        return 1;
    }
    for(int i=0;i<b-1;i++){
        ans *= a;
    }
    return ans;
}

int convert(int a){
    int sum=0,i=0,ones=0;
    while(a!=0){
        if(a%2 == 1){
            ones++;
            sum += pow(2,i);
            i++;
        }
        a /= 2;
    }
    return sum;
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        cout<<convert(a)<<endl;
    }
    return 0;
}