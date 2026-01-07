#include<bits/stdc++.h>
using namespace std;

int main(){// bubble sort to push all zeros to end of array
    // order maintaing
    
    int arr[] = {5,0,1,2,0,0,4,0,3}; // optimized bubble sort
    int n = 9;
    for(int i = 0; i<n-1 ; i++){
        // traverse
        for(int j = 0; j<n-1-i ; j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);   
            }  
        }
    }cout<<endl;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}