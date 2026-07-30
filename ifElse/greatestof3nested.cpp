#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 1st number:  ";
    cin>>x;
    cout<<"Enter 2nd number:  ";
    cin>>y;
    cout<<"Enter 3rd number:  ";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<x<<" is Greatest";
        }
    
        else{   //c>a , a>b -> c>a>b
            
                cout<<z<<" is greatest";
            }
        }
    else{ //b>a
        if(y>z){
            cout<<y<<" is greatest";
        }
        else{  //c>b>a 
            cout<<z<<" is greatest";
        }
    }
}