#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    // if((x%5==0 || x%3==0) && x%15!=0){
    //     cout<<"The number divisible by 5 or 3 but not by 15";
    // }
    // else{
    //     cout<<"Not desired number";
    // }
    //using nested if else
    if(x%5==0 || x%3==0){
        if(x%15!=0){
            cout<<"The number is divisible by 5 or 3 but not by 15";
        }
    else{
        cout<<"Not matching condition";
    }
}
    else{
        cout<<"not matching condition";
    }
}