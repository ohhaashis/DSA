#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n ;
    cin>>m>>n;
     
    for(int i=1; i<=m ; i++){
     
       for(int j=1 ; j<=n ; j++){
        if(i==1 || i==m){
        cout<<"*"<<" ";
       }

       }
       for(int k=1; k<=n ; k++){
        if( i==1 || i==m){
         continue;
        }
        if(k==1 || k==n){
            cout<<"*";
        }
                if(k!=1 || k!=n){
            cout<<" "<<" ";
        }

       }cout<<endl;
    }
}