#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Vanilla is a cutiee pie and a pretty malkin";
    stringstream ss(str);
    string temp ;
    
    while(ss >> temp ){
        cout<<temp<<endl;
    }
}