#include<iostream>
using namespace std;
int sumDigit(int n){
    int sumDigit=0;
    
    while(n>0){
    int lastDigit=n%10;
    n=n/10;
    sumDigit+=lastDigit;
    }
    return sumDigit;
}
int main(){
    cout<<"sum : "<<sumDigit(234567)<<endl;
}