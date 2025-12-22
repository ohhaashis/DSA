// Star Triangle Flipped
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows : ";
    cin>>x;
    for(int i=1; i<=x ; i++){
        for(int j=1 ; j<=x+1-i ; j++){
           cout<<" "<<" ";
        }
        for(int l=1; l<=i ; l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}