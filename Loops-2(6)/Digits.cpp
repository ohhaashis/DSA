// WWAP to count digits of a given number.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    int count=0;
   while(x>0){
        x /= 10;
        count +=1;
       
    }
     cout<<count<<endl;
}