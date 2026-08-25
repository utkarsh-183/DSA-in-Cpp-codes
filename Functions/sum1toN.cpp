#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<"sum = "<<sum(5)<<endl;
     cout<<"sum = "<<sum(16)<<endl;
}
