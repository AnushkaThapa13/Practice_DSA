#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr ={1,1,2,2,1,3,3};
    int i =0;
    for(int j = 1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<"The Number of Unique Element "<<i<<endl;
    return 0;
}