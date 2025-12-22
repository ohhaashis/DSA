#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //rows -> 0-2
    //columns -> 0-2
    // cout<<arr[1][2]
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            cin>>arr[i][j];
        }
    }

    // print 

     for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }





}