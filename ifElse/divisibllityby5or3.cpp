#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if(x%5==0 || x%3==0){
        cout<<"number divisible by 5 or 3";
    }
    else{
        cout<<"number is not divisible by 5 or 3";
    }
}