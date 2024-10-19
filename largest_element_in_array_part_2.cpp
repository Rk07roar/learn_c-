#include<bits/stdc++.h>
using namespace std;

int search(int n, vector <int>& arr , int start){
    if(start==n-1){
        return arr[start];
    }

    int retu = search(n,arr,start+1);

    return max(retu ,arr[start]);

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<search(n,arr,0);
}