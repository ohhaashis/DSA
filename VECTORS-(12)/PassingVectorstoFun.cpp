
#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>&a){// & = ampercent
    a[0] = 100;

    //  for(int i=0 ; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
  
    // cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(6);// 1 1
    v.push_back(1);// 2 2
    v.push_back(9);// 3 4
    v.push_back(0);// 4 4
    for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
  
    cout<<endl;

    change(v);

     for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
  
    cout<<endl;
} 
//Vectors are passed by values , each time you pass , new vector is created. 