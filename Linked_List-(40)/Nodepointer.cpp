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

void displayRec(Node* head){
    if(head==NULL) return ;
    displayRec(head->next);
    cout<<head->val<<"->";
    // displayRec(head->next);
    
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }cout<<endl;
    displayRec(temp);
    cout<<"NULL"<<endl;
}