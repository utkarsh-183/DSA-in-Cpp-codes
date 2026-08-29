#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* y1=&x; //A way to store address  0x261fe78 0x261fe78
    int z=9;
    int* y2=&z;

    cout<<&x<<endl;
    cout<<y1<<endl;

    cout<<&z<<endl;
    cout<<y2;
}