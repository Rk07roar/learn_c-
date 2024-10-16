#include<bits/stdc++.h>
using namespace std;
int tsearch(int start , int end , vector<int>& arr,int x){
    if(start>end){
        return 0;
    }
    int mid1=start + (end-start)/3;
    int mid2=end - (end-start)/3;

    if(arr[mid1]==x){
        return mid1;
    }
    else if(arr[mid2]==x){
        return mid2;
    }
    else if(arr[mid1]>x){
        return tsearch(start , mid1-1 , arr , x);
    }else if(arr[mid2]<x){
        return tsearch(mid2+1 , end , arr , x);
    }else{
        return tsearch(mid1+1 , mid2 -1 , arr , x);
    }
}
int main(){
    int n , x;
    cin>> n >>x;
    vector<int> arr(n);
    for (int i=0;i < n;i++){
        cin>>arr[i];
    }
    cout<< tsearch(0,n-1,arr,x);
}