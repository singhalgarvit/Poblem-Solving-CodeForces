#include<iostream>
using namespace std;

int main(){
    int N,a;
    int max=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a;
        if(a>max){
            max=a;
        }
    }
    cout<<max;
    return 0;
}