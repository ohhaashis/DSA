
// int main(){
//     int x;
//     cout<<"Enter number : ";
//     cin>>x;
//   int prod = 1;
//     for(int i=1; i<=x ; i++){
//         prod *= i;
        
//     }
//     cout<<prod;
// }

#include<iostream>
using namespace std;

void fact(int x){

  int prod = 1;
    for(int i=1; i<=x ; i++){
        prod *= i;
        
    }
    cout<<prod;
}
 int main(){
     int n;
     cout<<"Enter number : ";
     cin>>n;

    fact(n);
 }