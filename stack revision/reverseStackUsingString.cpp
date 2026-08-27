#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s = "Babbar";
    stack<char> ch;
    for(int i=0; i<s.length(); i++){
        ch.push(s[i]);
    }

    while(!ch.empty()){
        cout<<ch.top()<<" ";
        ch.pop();
    }
}