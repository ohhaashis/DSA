#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector< vector<int> > arr (m , vector<int>(n));

    for( int i=0 ; i<m ; i++){
        for ( int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
int sum = 0;
int cur_sum = 0;
int x=0;
    for (int i=0 ; i<m ; i++){
        for (int  j=0 ; j<n ; j++){
            sum+= arr[i][j];

        }
       if( cur_sum<sum){
              cur_sum = sum;
                x = i;
       }else{
              sum = 0;       }
         
    }cout<<x<<endl;
}

