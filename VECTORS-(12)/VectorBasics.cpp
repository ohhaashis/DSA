// Vector Basics
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(6); //Inserting 
    // cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(1);
    // cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(9);
    // cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(0);
    // cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    // cout<<arr[0]<<endl; //Accessing
    
}