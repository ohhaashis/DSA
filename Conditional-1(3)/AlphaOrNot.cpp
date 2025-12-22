#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter alphabet : ";
    cin>>ch;
    int asci = (int)ch;
    if(asci>=97 && asci<=122){
        cout<<"the character is lowercase alphabet.";
    }
    if(asci>=65 && asci<=90){
    cout<<"the character is uppercase alphabet.";
    }
}