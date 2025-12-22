#include<iostream>
using namespace std;

void display(int a[], int size){
    
    for(int k=0 ; k<=size-1;k++){
     cout<<a[k]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[], int size){
    b[0] = 100;
}


int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    // int arr[5]= {1,2,3,4,5};
   for(int i=0 ; i<=n-1 ; i++){
    cin>>arr[i];
   }
   int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr, size);
    display(arr, size);
   
}