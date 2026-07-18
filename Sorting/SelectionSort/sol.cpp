#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&arr,int n ){
    
    for(int i = 0;i<n-2;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[min]){
                min = j;
            }
            swap(arr[min],arr[j]);
        }

    }
}
int main(){
    vector<int>arr = {5,2,1,3,4};
    int n = arr.size();
    selectionsort(arr,n);
    for(int i : arr){
        cout<< i << " ";
    }
    return 0;
}