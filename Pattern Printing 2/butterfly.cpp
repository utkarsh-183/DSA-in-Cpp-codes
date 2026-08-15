#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int nsp=2*(n-1);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        cout<<endl;
        nsp-=2;
        nst++;
    }
    nsp=0;
    nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        cout<<endl;
        nsp+=2;
        nst--;
    }
}