#include<bits/stdc++.h>
using namespace std;

int main(){
    int rollNo[3][2] = {{1,2},{3,4},{5,6}};
    int marks[3][2] = {{90,80},{70,60},{50,40}};

    // print roll number and marks of each student
    for(int i=0; i<3 ; i++){
        cout<<"Student "<<i+1<<endl;
        for(int j=0; j<2 ; j++){
            cout<<"Roll No: "<<rollNo[i][j]<<" Marks: "<<marks[i][j]<<endl;
        }
        cout<<endl;
    }
}