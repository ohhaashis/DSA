#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1D =< vector< int > v;
    //2D
    int m,n;
    vector< vector<int> >v;
    vector< vector<int> >v(m); // another way to declare 2D vector of size m
    vector< vector<int> >v(m,vector<int>(n)); // 2D vector of size m*n with all values initialized to 0
    vector< vector<int> >v(m,vector<int>(n,5)); // 2D vector of size m*n with all values initialized to 5
}
