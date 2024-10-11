#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"find out the search word ";
    cin>>x;
    for (int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<" the location for the value is "<< i+1 ;
        }
    }
}