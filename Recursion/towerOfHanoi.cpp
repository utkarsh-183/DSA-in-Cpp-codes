#include<iostream>
using namespace std;
void hanoi(int n,char a, char b, char c){ //a=source rod, b=helper rod, c=destination rod
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){        
    int n;
    cout<<"Enter number of disk : ";
    cin>>n;
    hanoi(n,'A','B','C');
}