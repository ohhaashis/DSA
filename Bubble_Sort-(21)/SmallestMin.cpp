#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {0,1,2,4,5,8,9,12};
    int n  = 8;

    // int minNum = arr[0];
    // for(int i = 0; i<n ; i++){
    //     // if(minNum +1 == arr[i]){
    //     //    minNum = arr[i];
    //     // }else{
    //     //     cout<<minNum+1<<endl;
    //     //     break;
    //     // } 
        
    //     if(i != arr[i]){
    //         cout<<i<<endl;  //O(n)
    //         break;
    //     }
    // }
    

    // 2nd approach => Binary Search
    int lo = 0;
    int hi = n-1 ;
    int ans=-1;
    while(lo<=hi){
        int mid = lo + (hi -lo)/2 ;
        if(arr[mid]==mid) lo = mid +1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }cout<<ans<<endl;

}