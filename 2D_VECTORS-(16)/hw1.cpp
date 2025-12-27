#include<bits/stdc++.h>
using namespace std;
int main(){
    // matrix using 2D arrays

    // int m,n;
    // cin>>m>>n;
    // int arr[m][n];
    // for(int i=0; i<m ; i++){
    //     for (int j=0; j<n ; j++){
    //         arr[i][j]=10;
    //     }
    // }

    // matrix using 2D vectors

    int m,n;
    cin>>m>>n;
    vector< vector<int> > arr(m,vector<int>(n,10));
    for(int i=0; i<m ; i++){
        for (int j=0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
    }cout<<endl;

}