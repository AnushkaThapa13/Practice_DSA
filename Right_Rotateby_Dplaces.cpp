#include<bits/stdc++.h>
using namespace std;
void Right_rotate(vector<int>&arr,int d){
    int n = arr.size();
    d%=n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());

}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    int d = 3;
    Right_rotate(arr,d);
    for(int x:arr){
        cout<<" "<<x;
    }
    return 0;
}