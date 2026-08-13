#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows :";
    cin>>m;
    cout<<"Enter the coloumns :";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}