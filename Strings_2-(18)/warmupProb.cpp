#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "abcdeaa";
    int num_diff = 0;
    if(str.length() == 1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0 ; i<str.length(); i++){
        if(str.length() == 2){
            if(str[0] != str[1]){
                cout<<2<<endl;
            }else{
                cout<<1<<endl;
            }
            return 0;
        }
        if(i==0){
            if(str[i]!=str[i+1]) num_diff++;
        }else if(i==str.length() -1){
            if(str[i]!=str[i-1]) num_diff++;
        }else{
            if(str[i]!=str[i-1] && str[i]!=str[i+1]) num_diff++;
        }
    }
    cout<<num_diff<<endl;
}