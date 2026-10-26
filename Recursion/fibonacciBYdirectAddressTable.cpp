#include<iostream>
using namespace std;
int DAT[1001];
int fibo(int n){
    if(n==0 || n==1) return DAT[n]=n;
    else {
        if(DAT[n]==0) 
            DAT[n] = fibo(n-1) + fibo(n-2);
    }
    return DAT[n];
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<fibo(i)<<" ";
    }
}