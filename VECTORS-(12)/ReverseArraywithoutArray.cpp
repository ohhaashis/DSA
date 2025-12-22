// WAP to reverse the array without using any extra array.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void reversePart(int i, int j , vector<int>&v){//reversing part wise
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp ;
        i++;
        j--;
    }
}


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    for(int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    

    //method 1 ( i thought it )

    // for(int j=v.size()-1 ; j>=0 ; j--){
    //     cout<<v[j]<<" ";
    // }

    //method 2

    // reverse(v.begin(),v.end());

    //  for(int i=0 ; i<v.size() ; i++){
    // cout<<v[i]<<" ";
    // }

    // reversing part wise
    reversePart(0,2,v);

    for(int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
    }

}