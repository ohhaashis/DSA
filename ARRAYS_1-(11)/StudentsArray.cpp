// Students data array
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number of students : ";
    cin>>x;
    int arr[x];
    for(int i=0; i<=x-1 ;i++){
        cin>>arr[i];
    }
    for(int i=0; i<=x-1 ;i++){
        if(arr[i]<35){
            cout<<"ROLL OF STUDENT GOT LESS THAN 35 IS : "<< i+1;
        }
        // cout<<arr[i]<<" ";
    }
}