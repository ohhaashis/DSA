#include<bits/stdc++.h>
using namespace std;
int main(){
    // sort a string in decreasing order of values associated after removal of values smaller than x.
    string s = "AZYZXBDJKX";
    string str = "";
    int n = s.length();
    for(int i = 0 ; i<n ; i++){
        if((int)s[i] >= (int)'X'){
            str += s[i];
        }
    }
    sort(str.begin(),str.end(),greater<char>());
    cout<<str<<endl;

}