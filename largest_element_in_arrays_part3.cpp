#include<bits/stdc++.h>
using namespace std;

int largestelement(int n,vector<int>& arr){
    return *max_element(arr.begin(), arr.end());
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestelement(n,arr);
}