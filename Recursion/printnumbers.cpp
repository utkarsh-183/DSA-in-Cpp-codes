#include<iostream>
using namespace std;
void print(int n){
    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<" ";
    print(n-1);
    // return;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    print(n);
}