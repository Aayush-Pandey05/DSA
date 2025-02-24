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

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* temp = head;
    while(temp->next->next != NULL ){
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;

    return head;
}

 void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

int main(){
    Node* a = new Node(3);
    Node* b = new Node(4);
    Node* c = new Node(5);
    Node* d = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    deleteTail(a);
    display(a);
}