#include<iostream>
using namespace std;
bool prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<"prime number from 2 to"<<n<<" are :"<<endl;
    for(int i=2;i<=n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}