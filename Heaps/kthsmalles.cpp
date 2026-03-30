#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,-4,5,18,34,1,-7,56};
    priority_queue<int>pq; // MAX HEAP
    int k = 4;
    int n = sizeof(arr)/4;
    for(int i = 0 ;i<n ; i++){ // O(n)
        pq.push(arr[i]); // O(log(k))
        if(pq.size()>k) pq.pop(); // O(log (k))
    }

    cout<<pq.top(); 
}