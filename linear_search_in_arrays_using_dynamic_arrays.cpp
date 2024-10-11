#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int* arr = new int[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"which number to be located : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if (arr[i]==x){
            cout<<"\nthe located array is at : "<<i+1;
        }
    }
}