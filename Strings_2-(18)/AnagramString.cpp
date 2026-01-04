#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "listen";
    string t = "silent";

    if(s.length() != t.length()){
        cout<<"Not Anagram"<<endl;
        return 0;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if( s==t ){
        cout<<"Anagram"<<endl;
    }
}