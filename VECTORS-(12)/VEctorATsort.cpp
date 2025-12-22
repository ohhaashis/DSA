#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(0);
    a.push_back(7);
    // a.at(2)= 10;
    // cout<<a.at(2);
    for(int i=0 ; i<a.size() ; i++){
        cout<<a.at(i)<<" ";
    }

    cout<<endl;
    // sort
    sort(a.begin(),a.end());
    for(int i =0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
   }
