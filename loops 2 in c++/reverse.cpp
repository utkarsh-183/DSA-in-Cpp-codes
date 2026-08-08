#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int lastdigit=0;
    int r=0;
    while(n>0){
        r=r*10;
        lastdigit=n%10;
        r=r+lastdigit;
        n=n/10;
    }
    cout<<r;

}
//steps
// 1. r=r*10;
// 2. lastdigit
// 3. r+=lastdigit
// n/=10=