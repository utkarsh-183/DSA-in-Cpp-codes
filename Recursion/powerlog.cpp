#include<iostream>
using namespace std;
int pow(int x,int y){
    if(y==0) return 1;
    int ans=pow(x,y/2);
    if(y%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }
    //normal method
    // if(y==0) return 1;
    // if(y==1) return x;
    // return x*pow(x,y-1);
}
int main(){
    int x,y;
    cout<<"Enter base : ";
    cin>>x;
    cout<<"Enter exponent : ";
    cin>>y;
    cout<<pow(x,y);
}