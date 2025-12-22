// Number Pyramid Palindrome
// Star Pyramid
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows : ";
    cin>>x;
    for(int i=1 ; i<=x ; i++){
        for(int j=1 ; j<=x-i; j++){
            cout<<" "<<" ";
        }
       for(int k=1;k<=i ; k++){
        cout<<i<<" ";
       }
       for(int l=1 ; l<=i-1; l++){
        cout<<i<<" ";
       }
       for( int a=1 ; a<=x-i+1 ; a++){
        cout<<" "<<" ";
       }
        cout<<endl;
    }
}