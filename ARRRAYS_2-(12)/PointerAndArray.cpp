//Pointers and Array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int* ptr = arr; // giving address
    cout<<ptr<<endl;
   
    for(int i=0 ; i<=5 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to 1st element

    *ptr = 8; //ptr[0] = 8
    ptr++; // ptr is pointing to 2nd element
    *ptr = 9;
    ptr--; // ptr is pointing to 1st element

    cout<<endl;


    for(int i=0; i<=5 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to 1st element
}