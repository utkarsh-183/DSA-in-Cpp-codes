#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &head, int val){
    Node* t = new Node(val);
    if(head==NULL){
        head=t;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;
}
void insertAtIndex(Node* &head, int idx, int val){

    // insert at head
    if(idx == 0){
        insertAtHead(head, val);
        return;
    }

    Node* t = new Node(val);
    Node* temp = head;

    // move temp to (idx-1) node
    for(int i = 1; i <= idx-1; i++){
        temp = temp->next;
    }

    t->next = temp->next;
    temp->next = t;
}
void display(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    
    Node*head = a;
    insertAtHead(head,5);
    insertAtIndex(head,2,100);
    insertAtTail(head, 500);
    display(head);

}