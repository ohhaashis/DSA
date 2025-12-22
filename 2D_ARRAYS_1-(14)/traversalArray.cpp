#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //rows -> 0-2
    //columns -> 0-2
    // cout<<arr[1][2];
    for(int i=0 ; i<=2 ; i++){
      for(int j=0 ; j<=2 ; j++){
        cout<<arr[i][j]<<" ";
      }
    }
    


}

