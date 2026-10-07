#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // int x=12345;
    // string s=to_string(x);
    // cout<<s;

    //return total number of digits in a number without using any loop
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    string s=to_string(x);
    cout<<s.length();
}