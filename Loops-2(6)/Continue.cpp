//Using continue statement printing odd numbers upto n number.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    for(int i=1 ; i<=x ; i++){
        if(i%2==0) continue;
        cout<<i<<endl;
    }
}