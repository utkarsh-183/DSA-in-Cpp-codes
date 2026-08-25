#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    
    stack<int> temp(s); //creates a copy of original stack
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}