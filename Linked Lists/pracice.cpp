#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node * next;
    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
};

void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
}
int main(){
    Node* a = new Node(3);
    Node* b = new Node(4);
    Node* c = new Node(5);
    Node* d = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;

    cout<<a->next->data<<endl;

    display(a);
}