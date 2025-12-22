//Star Bridge
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
         for(int j=1 ; j<=n-i+1 ; j++){
            cout<<"*";
         }
         for(int k=i-1 ; k>=1 ; k--){
            cout<<" ";
         }
         for(int m=1 ; m<=i-1 ;m++){
            cout<<" ";
         }
         for(int l=1 ; l<=n-i+1 ; l++){
            cout<<"*";
         }
         cout<<endl;
    }

}