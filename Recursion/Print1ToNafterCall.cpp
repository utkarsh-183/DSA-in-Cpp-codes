#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ; //base condition
    print(n-1);      // call
    cout<<n<<endl;  //kaam
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print (n); //call
}