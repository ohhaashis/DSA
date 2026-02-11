#include<bits/stdc++.h>
using namespace std;

int maze(int sr,int sc,int er, int ec){

    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalWays = rightways + downways;
    return totalWays;

}

int maze2(int row , int col){

    if(row<1 || col<1) return 0;
    if(row == 1 && col ==1) return 1;
    int rightways = maze2(row , col-1);
    int downways = maze2(row-1 , col);
    int totalWays = rightways + downways;
    return totalWays;

}

void printpath(int sr,int sc,int er, int ec, string path){

    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){ // destination reached
        cout<<path<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,path + "R");// right
    printpath(sr+1,sc,er,ec,path + "D");// down

}

int main(){

    // int sr,sc,er,ec;
    // cin>>sr>>sc>>er>>ec;
    // cout<<maze(sr,sc,er,ec);
    // cout<<endl;
    // printpath(sr,sc,er,ec,""); 

    int row,col;
    cin>>row>>col;
    cout<<maze2(row,col);

}