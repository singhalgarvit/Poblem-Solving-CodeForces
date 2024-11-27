#include<iostream>
using namespace std;
int main(){
    int arr[100]={3,-2,5,-3,0,2,-4,6};
    int min=arr[0];
    for(int i=0;i<8;i++){
        if(arr[i]<min && arr[i]>0){
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}