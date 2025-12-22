//Deference Operator
// Star operator .. ( int *p = &x)
#include<iostream>
using namespace std;

int main(){
    int x=40;
    int *p = &x;

    cout<<*p<<endl; // *p = p ke andar jo address rakha hai, us address pe jao and vahan ki value print kardo !
    cout<<&x<<endl; // p ke andar ka address print krdo !
    cout<<p<<endl; // p ka value (updated) !
    
}