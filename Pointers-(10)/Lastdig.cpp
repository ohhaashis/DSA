// WAF to find out the first and last digit of a nymber without returning anything.
#include<iostream>
using namespace std;

void find(int x, int* ptr1 , int* ptr2){
    *ptr2 = x%10; //ld
    while(x>9){
        x /=10;
    }
    *ptr1 = x;
    return;
}

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    int fd, ld;
    int* ptr1 = &fd;
    int* ptr2 = &ld;

    find(x, ptr1 , ptr2);
    cout<<fd<<" "<<ld;
}