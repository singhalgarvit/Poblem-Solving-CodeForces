#include<iostream>
using namespace std;
int main(){
    int pass=1999;
    int a;
    cin>>a;
    while (a != pass){
            cout<<"Wrong \n";
            cin>>a;
    }
    cout<<"Correct";
    return 0;
}