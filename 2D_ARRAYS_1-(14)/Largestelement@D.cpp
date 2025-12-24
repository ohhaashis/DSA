#include<bits/stdc++.h>
using namespace std;

int main(){
      int arr[3][4] = {{5,12,7,9},{15,6,3,10},{8,11,14,2}};
     int largest = INT_MIN;
        for(int i=0; i<3 ; i++){
            for(int j=0; j<4 ; j++){
                if(arr[i][j]>largest){
                    largest = arr[i][j];
                }
            }
        }
        cout<<"Largest element is: "<<largest;
}
