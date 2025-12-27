#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector< vector<int> > arr(n , vector<int>(n));
    for( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }

    int mid = n/2;
    // printing middle rows and columns

    for (int i=0 ; i<n ; i++){
       for (int j=0 ; j<n ; j++){
           if(i == mid || j == mid){
               cout<<arr[i][j]<<" ";
           }else{
                cout<<"  ";
           }
           
    }
    cout<<endl;
}
}