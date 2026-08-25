#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    st.push(20);
    st.push(44);
    if(!st.empty()){
        cout<<"Stack is not empty and the top element is : "<<st.top()<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}