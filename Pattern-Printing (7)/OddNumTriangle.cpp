// Odd Number Triangle
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows/lines : ";
    cin>>x;
    for(int i=1; i<=x+6; i = i+2){
        for(int j=1; j<=i; j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

// or


int main(){
    int n;
    cin>>n;
    for (int i=1; i <=n ; i++){
        for (int j=0; j <i ; j++){
           cout<<(2*j+1)<<" ";
        }cout<<endl;
    }
}