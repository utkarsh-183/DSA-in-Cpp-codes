#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Element at top of stack is : "<<s.top()<<endl;
    s.pop();
    cout<<"Element after removing one element is : "<<s.top()<<endl;
}