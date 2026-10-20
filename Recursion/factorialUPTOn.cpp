#include<iostream>
using namespace std;
void factupto(int n){
    for(int i=1;i<=n;i++){
        int f=1;
        for(int j=2;j<=i;j++){
            f*=j;
        }
        cout<<f<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    factupto(n);
}