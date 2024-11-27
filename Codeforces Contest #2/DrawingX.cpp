#include <iostream>
using namespace std;

void draw(int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==n/2){
                if(j==n/2)cout<<"X";
                else cout<<"*";
            }
            else{
                if(j==i)cout<<"\\";
                else if(j==n-i-1)cout<<"/";
                else cout<<"*";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int N;
    cin >> N;
    draw(N);
    return 0;
}