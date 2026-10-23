#include<iostream>
using namespace std;
int pow(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1); 
}
int main(){
    int a,b;
    cout<<"enter base : "<<endl;
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    cout<<a <<" raised to the power "<< b<< " is "<<power(a,b);
}