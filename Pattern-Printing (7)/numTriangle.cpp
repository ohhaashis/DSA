//
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows : ";
    cin>>x;
    for(int i=1; i<=x ; i++){
        for(int j=i ; j>=1 ; j--){
        cout<<j;
        }
        cout<<endl;
    }
}