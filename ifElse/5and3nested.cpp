#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"Number is divisible by 5 and 3";
        }
        else{
            cout<<"Not desired";
        }
    }
    else{
        cout<<"Not desired";
    }   
}