#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side of triangle:";
    cin>>a;
    cout<<"Enter 2nd side of triangle:";
    cin>>b;
    cout<<"Enter 3rd side of triangle:";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
}