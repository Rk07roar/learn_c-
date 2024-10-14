#include<bits/stdc++.h>//using iterative method
using namespace std;

int binarySearch(int start,int end,vector<int>& arr,int X){
    while(end>=start){
        int mid = (start + end)/2;
        if(arr[mid] == X){
            return mid;
        }
        else if(arr[mid]<X){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }return -1;
}

int main(){
    int n,X;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>X;
    cout<<binarySearch(0,n-1,arr,X );
}