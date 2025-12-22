// Moving al negative numbers to beginning and positive to end with constant extra spaces.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// void sort(vector<int>&v){
//     int n=v.size();
//     int pos =0;
//     int neg =n-1;
    
//     while(pos<neg){
//        if(v[pos]<0) pos++;
//        if(v[neg]>0) neg--;
//        if(pos>neg) break;
//        if(v[pos]<0 && v[neg]>0){
//             int temp = pos;
//             pos = neg;
//             neg = temp;
//             pos++;
//             neg--;
//         }
      
//     }
// }

int main(){
    vector<int>v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(6);
    for(int i=0 ; i<=v.size()-1 ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // method-1
     sort(v.begin(),v.end());

    //method-2
    // int n=v.size();
    // int pos =0;
    // int neg =n-1;
    
    // while(pos<neg){
    //    if(v[pos]>0) pos++;
    //    if(v[neg]<0) neg--;
    //    if(pos>neg) break;
    //    pos++;
    //    neg--;
    // }

    // sort(v);

    //  for(int i=0 ; i<=v.size()-1 ; i++){
    //     cout<<v[i]<<" ";
    // }
}