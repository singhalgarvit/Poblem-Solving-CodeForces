#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int num1=0,num2=1,num3=0;
    for(int i=1;i<=N;i++){
        cout<<num1+num2;
        num3 +=num2;
        num1=num2;
 
    }
    return 0;
}