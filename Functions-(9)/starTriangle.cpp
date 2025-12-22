// staR triangle
#include<iostream>
using namespace std;

void startri(int z){
       for(int i=1 ; i<=z ; i++){
        for(int k=1 ; k<=i ; k++){
            cout<<"#";
        }
        cout<<endl;
       }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    startri(n);
}