// WAP to print sum of digits of a given number.
        // ld =  x%10;
        // sum += ld;
        // x /= 10;
#include<iostream>
using namespace std;
 int main(){
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    int sum = 0;
    int ld = 0;
    while(x>0){
        ld =  x%10;
        sum += ld;
        x /= 10;
    }
  cout<<sum;
 }