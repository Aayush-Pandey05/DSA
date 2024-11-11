#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node *a = new Node(10);// we are creating a new node and storing its address in the variable a
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    //PRINTING THE VALUES:- 
    Node *temp = a;// storing the address of the node at the pointer a in the temp ptr
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}