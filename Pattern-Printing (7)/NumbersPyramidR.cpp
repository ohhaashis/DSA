//Numbers Pyramid reverse
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows/lines : ";
    cin>>x;
    for(int i=1; i<=x; i++){
        for(int j=1; j<= x+1-i; j++){
            cout<<j;
        }
        cout<<endl;
    }

}