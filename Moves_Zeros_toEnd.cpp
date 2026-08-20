#include<bits/stdc++.h>
using namespace std;

//----Brute-Force----
/*void Move_zeros(vector<int>&arr)
{
    int n = arr.size();
    vector<int>temp;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int nz =temp.size();
    for(int i =0;i<temp.size();i++){
        arr[i] = temp[i];
    }
    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
}*/

//------Optimal Solution----
/*
void Move_zeros(vector<int>&arr){
    int j = -1;
    for(int i =0;i<arr.size();i++){
        if(arr[i]==0){
            j =i;
            break;
        }
    }
    for(int i =j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}*/

//-----Another way-----
void Move_zeros(vector<int>&arr){
    int count =0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
    vector<int>arr = {1,2,0,0,3,4,5,0,4,0};
    Move_zeros(arr);
    for(int x : arr){
        cout<<" "<<x;
    }
    return 0;
}