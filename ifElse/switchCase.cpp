#include<iostream>
using namespace std;
int main(){
    char op;
    cin>>op;
    
    int a,b;
    cin>>a>>b;
    switch(op){
        case '+' :
        cout<< a+b;
        break;

        case '-' :
        cout<< a-b;
        break;

        case '*':
        cout<< a*b;
        break;

        case '/':
        if(b != 0)
            cout << a / b;
        else
            cout << "Cannot divide by zero";
        break;

        default:
        cout << "Invalid choice";
    }

}