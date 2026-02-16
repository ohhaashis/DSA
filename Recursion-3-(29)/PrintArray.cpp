#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
    
}

void displayV(vector<int>&v , int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    displayV(v,idx+1);
    
}

int main(){
    int arr[] = {2,1,6,3,9,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    cout<<endl;
    vector<int>v={2,1,6,3,9,0,2,7};
    displayV(v,0);
}