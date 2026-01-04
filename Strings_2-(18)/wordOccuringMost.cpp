#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "apple banana apple orange banana apple";
    stringstream ss(str);
    string temp;
    vector<string> words;

   
    while(ss>>temp){
        words.push_back(temp);
    }

    sort(words.begin(),words.end());
    int count = 1;
     int maxCount = 1;
    for(int i=1 ; i<words.size() ; i++){
       
        if( words[i] == words[i-1]){
            count++;
            
        }
        else{
            count=1;
        }
     maxCount = max(maxCount,count);
        
    }cout<<maxCount<<endl;
}