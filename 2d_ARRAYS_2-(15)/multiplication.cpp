#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,c1;
    cout<<"Enter number of rows and columns of first matrix : ";
    cin>>r1>>c1;
    int arr1[r1][c1];
    cout<<"Enter the elements of first matrix : "<<endl;
    for(int i=0; i<r1 ; i++){
        for(int j=0; j<c1 ; j++){
            cin>>arr1[i][j];
        }
    }

    int r2,c2;
    cout<<"Enter number of rows and columns of second matrix : ";
    cin>>r2>>c2;
    if(c1 != r2){
        cout<<"Matrix multiplication not possible"<<endl;
        return 0;
    }
    int arr2[r2][c2];
    cout<<"Enter the elements of second matrix : "<<endl;
    for(int i=0; i<r2 ; i++){
        for(int j=0; j<c2 ; j++){
            cin>>arr2[i][j];
        }
    }

    int result[r1][c2];
    // Initializing the result matrix to 0
    for(int i=0; i<r1 ; i++){
        for(int j=0; j<c2 ; j++){
            result[i][j] = 0;
        }
    }

    // Multiplying the matrices
    for(int i=0; i<r1 ; i++){
        for(int j=0; j<c2 ; j++){
            for(int k=0; k<c1 ; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Printing the result matrix
    cout<<"Resultant Matrix after multiplication : "<<endl;
    for(int i=0; i<r1 ; i++){
        for(int j=0; j<c2 ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}