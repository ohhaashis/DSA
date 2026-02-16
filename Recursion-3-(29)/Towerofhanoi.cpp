#include<bits/stdc++.h>
using namespace std;

void hanoi(int n ,char a,char b , char c){
    if(n==0 ) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}

int32_t main(){ 

    int n = 3; //no, of dics
    hanoi(n,'A','B','C');

    /*
    n=3  output
A->C
A->B
C->B
A->C
B->A
B->C
A->C
    */
}