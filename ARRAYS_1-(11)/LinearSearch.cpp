//Linear Search
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
   
    for(int i=0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }
     int x;
    cout<<"Enter the element you want to find : ";
    cin>>x;
    for(int k=0 ; k<=n-1 ; k++){
        if(arr[k]==x){
           cout<<arr[k]<<" Element is present at index "<<k;
        }
    }
}