#include<bits/stdc++.h>
using namespace std;

int fact(int a){
    if(a==0) return 1;
    if(a<0) return -1;
    return a*fact(a-1);
}

void prinT(int a){
    if(a==0) return;
        prinT(a-1);
    cout<< a<<endl;

}

int SuM(int a){
    if(a==0) return 0;
    return a+SuM(a-1);
}

void sum1ton(int sum , int m){
       if(m==0){
        cout<<sum<<endl;
        return ;
       }

       sum1ton(sum+m , m-1);
}

int main(){
    int n;
    cin>>n;
    // cout<<fact(n);
    // cout<<"!";
    // prinT(n);
    // cout<<SuM(n);
    sum1ton(0,n);
}