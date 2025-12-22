// Find the doublet in array whose sum is equal to the given value x.
// TWO SUM
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int x;
    cout<<"Enter target : ";
    cin>>x;
    vector<int>v;
    int n ;
    cout<<"Enter vector size : ";
    cin>>n;

    cout<<"Enter aray elements : ";
    for(int i=0 ; i<n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i =0 ; i<v.size()-2 ; i++){
        for(int j = i ; j <= v.size()-1 ; j++ ){
               if(v[i] + v[j] == x+1){
                cout<<"("<<i<<","<<j<<")"<<endl;
               }
        }
    }
}