#include<iostream>
#include<climits>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

class stack {
public:
    Node* head;
    int capacity;
    int currSize;

    stack(int c) {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty() {
        return this->head == NULL;
    }

    bool isFull() {
        return this->currSize == this->capacity;
    }

    void push(int data) {

        if(isFull()) {
            cout << "OverFlow" << endl;
            return;
        }

        Node* new_node = new Node(data);

        new_node->next = this->head;
        this->head = new_node;

        this->currSize++;
    }

    int pop() {

        if(this->head == NULL) {
            cout << "UnderFlow" << endl;
            return INT_MIN;
        }

        Node* tobeRemoved = this->head;

        int result = tobeRemoved->data;

        this->head = this->head->next;

        delete tobeRemoved;

        this->currSize--;

        return result;
    }

    int getTop() {

        if(this->head == NULL) {
            cout << "UnderFlow" << endl;
            return INT_MIN;
        }

        return this->head->data;
    }

    int size() {
        return this->currSize;
    }
};

int main() {

    stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.getTop() << endl;

    st.push(4);
    st.push(5);

    cout << st.getTop() << endl;

    st.push(8);

    return 0;
}