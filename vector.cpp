#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(32);
    a.pop_back();
    cout<<a[3];
    cout<<a.size();
    return 0;
}

