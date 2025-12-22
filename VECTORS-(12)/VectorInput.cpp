// Vector Input
#include<iostream>
#include<vector>

using namespace std;

int main(){
 vector<int>a(5); // initial siz= 5
 for(int i=0 ; i<5 ; i++){
   cin>>a[i];
 }
  for(int i=0 ; i<5 ; i++){
    cout<<a[i]<<" ";
 }
}