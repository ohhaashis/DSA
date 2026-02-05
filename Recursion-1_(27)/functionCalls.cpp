#include<bits/stdc++.h>
using namespace std;

int product(int a , int b){
    return a*b;
}

void greet(int n){
    if( n==0 ){
       return;
    }
    cout<<"Hello, Good Morning"<<endl;
    greet(n-1);
}

int main(){
    // int n,m;
    // cin>>n>>m;
    // cout<<product(n,m)<<endl;
    int n;
    cin>>n;
    greet(n);
}