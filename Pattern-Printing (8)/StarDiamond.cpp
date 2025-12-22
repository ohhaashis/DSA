// star Diamond ... Practise it well
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of rows : ";
    cin>>x;
    int nst =1;
    int nsp = x-1;
    for(int i=1 ; i<=2*x-1 ; i++){
        // spaces
        for(int j=1 ; j<=nsp ; j++){
            cout<<" ";
        }
        if(i<=x-1) nsp--;
        else nsp++;
        // Stars
        for(int k=1 ; k<=nst ; k++){
            cout<<"*";
        }
        if(i<=x-1) nst+=2;
        else nst -=2;
        cout<<endl;
    }
}