#include<bits/stdc++.h>
using namespace std;
int main(){
    int u =0;
    vector<int>arr = {1,2,2,3,4,4,3};
    for(int i = 0;i<arr.size();i++){
        u ^= arr[i];

    }
    cout<<u;
    return 0;
}