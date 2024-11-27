#include<iostream>
using namespace std;

int main(){
    int N,arr[100];
    cout<<"Enter no. of elements : \n";
    cin>>N;
    cout<<"Enter Array : \n";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<"Good Element(s) are : \n";
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(arr[j]>arr[i]){
                break;
            }
            if(j==N-1){
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}