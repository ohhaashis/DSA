#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;

    Student(string name,int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};

void change(Student* s){
    s->name = "Ashish";
}

int main(){
    Student s("Ash",202,95.3);
    // s.name = "Ashish Kumar";
    // s.rno = 202;
    // s.marks = 95.4;
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;
}