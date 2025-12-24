#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Original Matrix is: "<<endl;

    for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Rotating the matrix by 90 degree clockwise
    
    for(int i=0; i<3 ; i++){
        for(int j=i; j<3 ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0 ; i<3 ; i++){
       for(int j=0; j<3/2 ; j++){
         swap(arr[i][j], arr[i][3-j-1]);
       }
    }

    cout<<"Matrix after rotating by 90 degree clockwise is: "<<endl;

    for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}