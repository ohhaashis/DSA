// Find the last occurence of x in array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(6);// 1 1
    a.push_back(1);// 2 2
    a.push_back(9);// 3 4
    a.push_back(10);// 4 4
    a.push_back(1);
    a.push_back(9);
    int x;
    cout<<"Enter element : ";
    cin>>x;
    int idx = -1;
    // for(int i=0 ; i<a.size(); i++){
    //    if(a[i]==x){
    //     idx=i;
    //    }
       
    // }
    for(int i = a.size()-1 ; i >=0 ; i--){
        if(a[i]==x){
        idx=i;
        break;
    }
  cout<<idx-1;
    
}
}