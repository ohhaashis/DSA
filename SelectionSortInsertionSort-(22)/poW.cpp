#include<bits/stdc++.h>
using namespace std;

int power(int base,int exp ){
        if(exp==0) return 1;
        if(base==0 ) return 0;

        return base*power(base,exp-1);
}

int main(){
    cout<<power(2,3);
}