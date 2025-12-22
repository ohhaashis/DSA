// Pointers Intro
#include<iostream>
using namespace std;

int main(){
    float x=4.0;
    float *p = &x;

    float y=6.0;
    float *p2 = &y;

    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&y<<endl;
    cout<<p2;
}