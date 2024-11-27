#include<iostream>
using namespace std;
int pattern1(int n){
    for(int i=0;i<=n;i++){
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
    cout<<"\n";
    }
    return 0;
}

int pattern2(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*i)-1;k++){
            cout<<"*";
        }
    cout<<"\n ";
    }
    return 0;
}

int main(){
    pattern1(6);
    pattern2(6);
    return 0;
}