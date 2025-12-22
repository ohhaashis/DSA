//Second Max element value out of all elements in the array
// *****
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    int max = INT16_MIN;
    for(int i=0 ;i<=n-1 ; i++){
        cin>>arr[i];
    }
    int smax = INT16_MIN;
        for(int i=0; i<=n-1 ; i++){
        // int &max= INT_MIN;
        if(arr[i]>max && arr[i] != max){
          
        }
        cout<<max<<endl;
        cout<<smax;
    }
}



