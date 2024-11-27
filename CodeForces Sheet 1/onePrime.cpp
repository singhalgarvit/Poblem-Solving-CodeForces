#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    string ans="YES";
    if(a==1){
        ans="NO";
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            ans="NO";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}