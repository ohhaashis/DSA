#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {5,4,6,3,2,1}; // optimized bubble sort
    for(int i = 0; i<=5 ; i++){
        // traverse
        bool flag = true;
        for(int j = 0; j<=5 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }  
        }if(flag == true) break; // if no swapping occurs, array is sorted
    }

    for(int i = 0; i<=5 ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}