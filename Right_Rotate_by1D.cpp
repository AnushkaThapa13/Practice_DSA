#include<bits/stdc++.h>
using namespace std;
void Right_Rotate(vector<int>&arr){
    int temp = arr[arr.size()-1];
    for(int i =arr.size()-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}
int main(){
    vector<int>arr ={1,2,3,4,5};
    Right_Rotate(arr);
    for(int x:arr){
        cout<<" "<<x;
    }
    return 0;
}