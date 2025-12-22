// WAP to check if a number is prime or not.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    for(int i=2 ; i<=x-1 ; i++){

        if(x%2==0){
            cout<<x<<" is a Composite Number "<<endl;
        }
        else{
            cout<<x<<" is a Prime Number "<<endl;
        }
        break;
    }
}