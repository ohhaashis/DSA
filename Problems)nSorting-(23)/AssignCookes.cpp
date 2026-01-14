class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
  int count = 0;
 int i = 0; 
 int j = 0;
 while(i<g.size() && j<s.size() ){
    if(s[j]>=g[i]){
        count++;
        i++;
        j++; 
    }else{
        j++;
    }
 }
    return count ;
    }
};

// #include<bits/stdc++.h>
// using namespace std;
// //leetcode 455
// //trying !!! only
// int main(){
//     vector<int>g;
//     vector<int>s;
    // int g_len = g.size();
    // int s_len = s.size();
    // for(int i = 1 ; i<=g_len ; i++){
    //     cin>>g[i];
    // }
    // for(int i = 1 ; i<=s_len ; i++){
    //     cin>>s[i];
    // }
    // int ops;
    // for(int ele : g){int count = 0;
    //     for(int val : s){
    //         if(val>=ele){
    //             count++;
    //break;
    //         }
    //     }count = ops;
    // }
    // cout<<ops<<endl;

    /*
    class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
  int count = 0;
    int mi = -1;
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i]>=g[0]){
            mi = i;
            break;
        }
    }
    if(mi == -1) return 0;
    int i = 0;
    int j = mi;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]) count++;
        i++;
        j++;
    }
    return count ;
    }
};
    */

    /*
    class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
  int count = 0;
    int mi = min(g.size(),s.size());
    for(int i = 0 ; i<mi ; i++){
        if(s[i]>=g[i]) count++;
    }
    return count ;
    }
};
    */

