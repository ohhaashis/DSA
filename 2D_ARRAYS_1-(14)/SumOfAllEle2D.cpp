#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4] = {{5,12,7,9},{15,6,3,10},{8,11,14,2}};
    int sum = 0;
    for(int i=0; i<3 ; i++){
        for(int j=0; j<4 ; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of all elements in 2D array is: "<<sum;
}