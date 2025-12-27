// addition of two 2D vectors

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n ;
    cin>>m>>n;
    vector< vector<int> > a(m,vector<int>(n));
    vector< vector<int> > b(m,vector<int>(n));

    for(int i=0; i<m ; i++){
        for (int j=0 ; j<n ;  j++){
            cin>>a[i][j];
        }
    }
     for(int i=0; i<m ; i++){
        for (int j=0 ; j<n ;  j++){
            cin>>b[i][j];
        }
    }

    vector< vector<int> > c(m,vector<int>(n));

    for(int i=0; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }

    //  for(int i=0; i<m ; i++){
    //     for (int j=0 ; j<n ;  j++){
    //         cout<<a[i][j];
    //         cout<<" ";
        
    //     }cout<<endl;
    // }
}