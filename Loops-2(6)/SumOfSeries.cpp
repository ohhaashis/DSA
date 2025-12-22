// print the sum of the series : 1-2+3-4+5-6+7... upto n.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    int sum =0;
    for(int i=1; i<=x ; i++){
        if(i%2==0){
            sum -= i;
        }
        else{
            sum += i;
        }
        
    }
    cout<<sum;
}