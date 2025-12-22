//Alphabet square
#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter number of rows : ";
    cin>>c;
    int x;
    cout<<"Enter number of columns : ";
    cin>>x;
    for(int i=1; i<=c ; i++){
        for(int k=1 ; k<=x ; k++){
            cout<<i;
        }
        cout<<endl;
    }
}