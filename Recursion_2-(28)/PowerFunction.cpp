#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){//TC=> O(n) SC=> O(n
    if(n==0) return 1;
    return x*power(x,n-1);
}

int main(){
    /*
    int x, n;
    cin>>x>>n;

    if(n == 0) {
        cout<<1;
        return 0;
    }

    int ans = 1;

    for(int i=1; i<=n; i++) {
        ans *= x;
    }

    cout<<ans;
    */
    int x, n;
    cin>>x>>n;
    // power(x,n);

    //new thing to optimize the code    // TC => O(logn) SC => O(logn)
    if(n%2==0){
        cout<<power(x,n/2)*power(x,n/2);
    } else {
        cout<<x*power(x,n/2)*power(x,n/2);
    }
}
