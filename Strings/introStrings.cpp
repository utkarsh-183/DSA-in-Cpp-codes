#include<iostream>
using namespace std;
int main(){
     char str[]={'a','b','c','d','e','\0'}; //char str[]={'1','2','3','4','5'};
    for(int i=0;i<5;i++){ // '\0' is a null character and has ascii value 0
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str;

    // char str[]={'a','b','c','d','e','\0'}; 
    // cout<<(int)(str[5]);
} 