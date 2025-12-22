//Print the factorial of a given number n.
#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter number : ";
    cin>>c;
    int prod=1;
    for (int i=1 ; i<=c ; i++){
        prod *=i;
    }
    cout<<prod;
}