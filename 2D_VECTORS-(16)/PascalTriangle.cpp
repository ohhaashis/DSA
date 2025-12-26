#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int x;
//     cin>>x;
//     for(int i=1; i<=x ; i++){
//         int curr =1;
//         for(int j=0 ; j<=i ;j++){
//             cout<<curr<<" ";
//             curr = curr*(i-j)/(j+1);
//         }
//         cout<<endl;
//     } 
// }


// method 2

int main(){
    // using 2D vector

    int x;
    cin>>x;
    vector< vector<int> > v;
    
    for(int i=1; i<=x ; i++){
        vector<int>a(i);
       
        v.push_back(a);
    }
    // generate 

    for(int i=0; i<x ; i++){
        for(int j=0 ; j<=i ; j++){
            if(j==0 || j==i){
                v[i][j] = 1;
            }else{
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }  
        }
    } 

    //print 
        for(int i=0; i<v.size() ; i++){
        for(int j=0 ; j<=i ; j++){
           cout<<v[i][j]<<" "; 
        }cout<<endl;
    }
  } 

  // do pascal triangle 2 => leetcode 