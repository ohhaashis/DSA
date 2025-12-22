//Print the n fibonacci number.
//1 1 2 3 5 8 13 21 34 55 ..
#include<iostream>
using namespace std;


int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
   int a=1, b=1, sum=0;
   for(int i=1; i<=x-2; i++){
    sum = a + b;
    a=b;
    b=sum;
   }
  cout<<sum;
}