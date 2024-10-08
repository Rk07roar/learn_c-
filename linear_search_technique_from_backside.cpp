#include<bits/stdc++.h>
using namespace std;
Backward(int n,int arr[] ,int X){
    for (int i=n;i>0;i--){
        if (arr[i] == X){
            cout<<i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int X;
    cout<<"enter the numberr to search";
    cin>>X;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    Backward(n,arr,X);
}