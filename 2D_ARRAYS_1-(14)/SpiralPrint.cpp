#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cout<<"Enter number of rows of matrix : ";
    cin>>m;
    int n;
    cout<<"Enter number of columns of matrix : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            cin>>arr[i][j];
        }
    }cout<<endl;

    cout<<"Spiral Print of the matrix is : "<<endl;

    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    while(minr <= maxr && minc <= maxc){
        // right
        for(int i=minc ; i<=maxc ; i++){
            cout<<arr[minr][i]<<" ";
        }

        minr++;
        // down
    
        for(int i=minr ; i<=maxr ; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        // left

        if(minr <= maxr){
            for(int i=maxc ; i>=minc ; i--){
                cout<<arr[maxr][i]<<" ";
            }
            maxr--;
        }
        // up

        if(minc <= maxc){
            for(int i=maxr ; i>=minr ; i--){
                cout<<arr[i][minc]<<" ";
            }
            minc++;
        }
    }

}