#include<bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<int>pq; // MAX HEAP
    // pq.push(10);
    // pq.push(2);
    // pq.push(-6);
    // pq.push(8);
    // cout<<pq.top()<<endl; // 10
    // pq.pop(); // remove the top element
    // cout<<pq.top()<<endl; // 8

    priority_queue<int , vector<int>, greater<int> >pq; // MIN HEAP
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout<<pq.top()<<endl; // -6
    pq.pop(); // remove the top element
    cout<<pq.top()<<endl; // 2
}