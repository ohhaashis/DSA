// Display the AP - 1,3,5,7,9... upto n terms.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of terms : ";
    cin>>x;
    for(int i=1 ; i<=2*x ; i = i+2){
        cout<<i<<" ";
    }
}