#include<iostream>
using namespace std;

int GCD(int A, int B){
    int min=(A<B)?A:B;
    for(int i=min;i>=1;i--){
        if(A%i==0 && B%i==0){
            return i;
        }
    }
}

int main(){
    int A,B;
    cin>>A>>B;
    cout<<GCD(A,B);
    return 0;
}