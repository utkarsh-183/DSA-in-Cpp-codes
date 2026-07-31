#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter marks obtained:";
    cin>>x;
    
    if(x>=90 ){
        cout<<"'A'";
    }
    else if(x>=80 && x<90){
        cout<<"'B'";
    }
   else if (x>=60 && x<80){
        cout<<"'C'";
    }
   else if (x>=40 && x<60){
        cout<<"'D'";
    }

    else{
        cout<<"fail";
    }
}