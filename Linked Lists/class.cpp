// we will be creating a user defined DATA STRUCTURE which will help in the process of insertion, deletion and other processes in the linked lists
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


class LinkedList{
public:
    int size;
    Node* head;
    Node* tail;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);// dynamic memory allocation
        if(size==0) head = tail = temp;
        else{
            tail-> next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
}