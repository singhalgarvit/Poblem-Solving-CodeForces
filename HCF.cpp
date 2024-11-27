#include<iostream>
using namespace std;

int HCF(int a ,int b){
    int hcf=1;
    int n=(a>b)?b:a;
    for(int i=2;i<=n;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int HCF2(int a ,int b){
    int n=(a>b)?b:a;
    for(int i=n;i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"HCF = "<<HCF2(a,b);
    return 0;
}