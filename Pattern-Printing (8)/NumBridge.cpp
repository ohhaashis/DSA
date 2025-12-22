//Number Bridge
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int a=1;
         for(int j=1 ; j<=n-i+1 ; j++){
            cout<<a;
            a++;
         }
         for(int k=i-1 ; k>=1 ; k--){
            cout<<" ";
            a++;
         }
         for(int m=1 ; m<=i-1 ;m++){
            cout<<" ";
            a++;
         }
         for(int l=1 ; l<=n-i+1 ; l++){
            cout<<a;
            a++;
         }
         cout<<endl;
    }
}