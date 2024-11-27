#include<iostream>
using namespace std;

int printSymbol(int num,char S){
    for(int i=0;i<num;i++){
        cout<<S;
    }
    return 0;
}

int main(){
    char S;
    cin>>S;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        printSymbol(num,S);
        cout<<endl;
    }
    return 0;
}