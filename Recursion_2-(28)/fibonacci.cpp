#include<bits/stdc++.h>
using namespace std;

int fibo(int m){
    if(m==0) return 0;
    if(m==1) return 1;
    if(m==2) return 1;
    return fibo(m-1) + fibo(m-2); 
}

int main(){
    /*
    int n;
    cin>>n;

    if(n == 0) {
        cout<<0;
        return 0;
    }
    if(n == 1) {
        cout<<1;
        return 0;
    }

    int a = 0, b = 1, c;

    for(int i=2; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout<<c;
    */

    int n;
    cin>>n;
    cout<<fibo(n);
}