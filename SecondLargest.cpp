#include<bits/stdc++.h>
using namespace std;
void SecondLargest(vector<int>&arr){
    int Largest = arr[0];
    int secondlargest = -1;

    for(int i =1;i<arr.size();i++){
        if(arr[i]>Largest){
            secondlargest = Largest;
            Largest = arr[i];
        }
        else if (arr[i]<Largest&&arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    cout<<"Second Largest Element is "<<secondlargest<<" "<<endl;

}
int main(){
vector<int>arr = {1,2,5,4,6};
SecondLargest(arr);
return 0;
}