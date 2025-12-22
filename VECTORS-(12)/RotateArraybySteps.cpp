// rotate the given array a by "k" steps , where k is non - negatve.
// Note : k can be greater than "n" as well where n is the size of array a.
#include<iostream>
#include<vector>
using namespace std;

void reversePart(int a , int b , vector<int>&v){
        while(a<=b){
            int temp = v[a];
            v[a] = v[b];
            v[b] = temp;
            a++;
            b--;
        }
}

int main(){
    vector<int>v;
    v.push_back(6);// 1 1
    v.push_back(1);// 2 2
    v.push_back(9);// 3 4
    v.push_back(0);// 4 4
    int n = v.size();
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    int k;
    cout<<"Enter the INDEX by which you want to rotate : ";
    cin>>k;

    reversePart(0,k,v);

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";

    }
}