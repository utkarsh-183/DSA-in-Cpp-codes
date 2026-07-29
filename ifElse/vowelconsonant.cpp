#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character=";
    cin>>ch;
    //a to z-->97 to 122
    //A to Z-->65 to 90
    int ascii = (int)ch;
    // if(ascii>=97 && ascii<=122){
    //     cout<<" The charcter is lowercase alphabet";
    // }
    // if(ascii>=65 && ascii<=90){
    //     cout<<"The character is uppercase alphabet";
    // }
    if ((ascii>=65 && ascii<=90) || (ascii>=97 || ascii<=122)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            cout<<"The character is vowel";
        }
    else{
        cout<<"The character is consonant";
    }
}
else{
    cout<<"The character is not an alphabet";
  }
}