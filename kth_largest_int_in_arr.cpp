#include<iostream>
using namespace std;
int main(){
    int arr[100]={4,2,5,-1,9,3,7};
    for(int i=0;i<6;i++){
        for(int j=i;j<7;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    int k=4;
    cout<<"\n"<<arr[k-1];
    
    return 0;
}