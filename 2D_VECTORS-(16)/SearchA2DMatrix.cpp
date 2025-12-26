#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector< vector<int> > matrix(m,vector<int>(n));
    // for(int i=0; i<m ; i++){
    //     for(int j=0; j<n ; j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    int target;
    cin>>target;

    // search in 2D matrix

    // if matrix[i][j] > target => go left 
    // if matrix[i][j] < target => go down

    int m = matrix.size();
    int n = matrix[0].size();

    int i=0;
    int j = n-1;
    while(i<m && j>=0){
        if(matrix[i][j] == target){
            return true;
        }
        else if(matrix[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;

}