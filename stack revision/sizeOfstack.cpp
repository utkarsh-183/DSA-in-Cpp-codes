#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(80);
    cout<<"size of stack is: "<<s.size()<<endl;
    cout<<"top element of stack is: "<<s.top()<<endl;

    s.pop();
    cout<<"size of stack is: "<<s.size()<<endl;
    cout<<"top element of stack is: "<<s.top()<<endl;
}