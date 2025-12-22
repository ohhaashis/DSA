//Take positive integer and tell if is divisible by 5 and 3.
#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"Enter number : ";
    cin>>c;
    if(c%15==0){
        cout<<"Divisible by 3 and 5 ";

}
else{
    cout<<"Not divisible by 3 and 5 ";
}
}