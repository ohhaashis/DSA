#include<bits/stdc++.h>
using namespace std;

class Node{ // LINKED LIST NODE 
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


int main(){
    // Node a;
    // a.val = 10;
    // Node b;
    // b.val = 20;
    // Node c;
    // c.val = 30;

    Node a(10);
    Node b(20);
    Node c(30);

    // forming

    a.next = &b;
    b.next = &c;

    Node temp = a ;
    int x = 5;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}