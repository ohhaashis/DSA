// Pascal Optimised
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=1; i<=x ; i++){
        int curr =1;
        for(int j=0 ; j<=i ;j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}