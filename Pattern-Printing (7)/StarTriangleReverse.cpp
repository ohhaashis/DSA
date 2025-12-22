//Star Triangle Reverse
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of lines/rows : ";
    cin>>x;
    // no. of stars = n + 1 - i
    for( int i=1 ; i<=x ; i++){
  for(int j=1; j<= x+1-i ; j++){
    cout<<"*";
  }
  cout<<endl;
    }
}