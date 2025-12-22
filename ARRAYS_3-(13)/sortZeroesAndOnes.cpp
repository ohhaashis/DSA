// Sort the array of 0's and 1's.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sort01(vector<int>&v){
    int n = v.size();
    int noz=0;
    int noo=0;
    for(int i=0 ; i<n ; i++){
        if(v[i]==0) noz+=1;
        else noo+=1;
    }
    //filling elements
    for(int i=0 ; i<n ;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}


int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    for(int i=0 ; i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //method-1
    // sort(v.begin(),v.end());
    // for(int i=0 ; i<v.size() ;i++){
    //     cout<<v[i]<<" ";
    // }
    
    //method-2
    sort01(v);
    for(int i=0 ; i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
}