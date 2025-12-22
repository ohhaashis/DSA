// OPerations on VECTORS
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(6);// 1 1
    v.push_back(1);// 2 2
    v.push_back(9);// 3 4
    v.push_back(10);// 4 4
    for(int i=0 ; i<=v.size()-1 ; i++){
     cout<<v[i]<<" ";
    }
    
    v.pop_back();

    cout<<endl;

     for(int i=0 ; i<=v.size()-1 ; i++){
     cout<<v[i]<<" ";
    }
    
}