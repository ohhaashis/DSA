// Floyd's Triangle
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows : ";
    cin>>x;
    int k=1;
    for(int i=1; i<=x ; i=i+1){
        for(int j=1; j<=i ; j=j+1){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
}