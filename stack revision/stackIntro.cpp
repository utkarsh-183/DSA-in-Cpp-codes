#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;  

        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size - top>1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack UnderFlow";
            }
        }

         int peek(){
            if(top >= 0){
                return arr[top];
            }
            else{
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    //creation of stack
    // stack<int> st;

    //push operation
    // st.push(2);
    // st.push(4);
    // st.push(50);

    // // pop operation
    // st.pop();
    // st.pop();
    // st.pop();

    
    // if(st.empty()){
    //     cout<<"Stack is empty "<<endl;
    // }
    // else{
    //     cout<<"Printing Top Element: "<<st.top()<<endl;
    //     cout<<"Stack is not empty"<<endl;
    // }

    // cout<<"Size of stack is : "<<st.size()<<endl;
    // return 0;

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    // st.push(22);
    // st.push(43);
    // st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty overflow of elements";
    }
    else{
        cout<<"Stack is not empty";
    }
}