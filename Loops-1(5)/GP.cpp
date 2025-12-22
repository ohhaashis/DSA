//Display this GP - 1,2,4,8,16,32..upto n terms.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of terms : ";
    cin>>x;
    for(int i=1 ; i<=x ; i++){
        cout<<i*i<<" ";
    }
}
    