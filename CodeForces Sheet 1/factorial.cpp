#include<iostream>
using namespace std;

long long factorial(long long n){
    return (n<=1)?1:n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
      cin>>a;
      cout<<factorial(a)<<endl;
    }

    return 0;
}