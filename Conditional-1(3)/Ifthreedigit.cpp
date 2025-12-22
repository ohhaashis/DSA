//Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter number : ";
    cin>>c;
    if(c>=100 || c<=999){
        cout<<"Three Digit";
    }
    else{
        cout<<"Not a Three Digit";
    }
}