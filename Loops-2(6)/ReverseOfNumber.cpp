// WAP to Print reverse of a given number.
    //   r *= 10;
    //    ld = x%10;
    //    r += ld;
    //    x /= 10;
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    int ld = 0;
    int r = 0;
    while(x>0){
        r *= 10;
       ld = x%10;
       r += ld;
       x /= 10;
    }
    cout<<r;
}