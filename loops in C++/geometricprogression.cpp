#include<iostream>
using namespace std;
int main(){
    //required geometrical progression------------> 1,2,4,8,16,32,......upto'n' terms
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    // int a=1
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a*2;
    // }
    for(int i=1; i<=2^(n-1);i++){
        cout<<n<<endl;
    }

}