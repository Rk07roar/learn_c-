#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    cout<<"the number to search :";
    cin>>x;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            cout<<"\nthe number is located in : "<<i+1;
        }
    }
}