#include<bits/stdc++.h>
using namespace std;
bool Check(vector<int>&arr){
    for(int i =1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    vector<int>arr = {1,2,3,4,4,5};
    bool result = Check(arr);
    cout<<result;
    return 0;
}