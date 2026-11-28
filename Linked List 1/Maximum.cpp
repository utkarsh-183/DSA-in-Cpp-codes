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

int maximum(Node* head){
    Node*temp = head;
    int max = temp->val;
    while(temp!=NULL){
        if(temp->val>max){
            max=temp->val;
        }
        temp=temp->next;
    }
    return max;
}
int main(){
    Node * a = new Node(10);
    Node * b = new Node(90);
    Node * c = new Node(30);
    Node * d = new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    
    Node*head = a;
    cout<<"Maximum of all Nodes is : "<<maximum(head);
}    