#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next; // think of it like Node is a user defined data type and next is the pointer in which the address of the next node will be stored
    Node(int val){
        this-> val = val;// here this-> means the current instace of the object... this is as same as a.val
        this-> next = NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // cout<<a.val;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // ((a.next)->next)->val   :- this will print the value of c, similarly we can use a to print the value of d as well 
    // cout<<(*(a.next)).val; this is one way to access the value of b through a
    cout<< a.next->val;// this is another way to access the value of b though a
    // this shows how we can access the values of another nodes in a linked list
}