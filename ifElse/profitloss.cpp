#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Selling price:";
    cin>>sp;
    cout<<"Cost price:";
    cin>>cp;
    if(sp>cp){
            cout<<"profit ="<<sp-cp;
    }
     else if (sp<cp){
        cout<<"loss"<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }
}
