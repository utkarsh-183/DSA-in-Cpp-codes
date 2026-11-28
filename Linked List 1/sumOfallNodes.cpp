#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*  next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int sum(Node* head){
    Node* temp = head;
    int sum=0;
    while(temp!=NULL){
        sum=sum+temp->val;
        temp=temp->next;
    }
    return sum;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    Node* head = a;
    cout<<"Sum of all the node is : "<<sum(head);
}