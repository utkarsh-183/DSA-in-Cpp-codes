#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string s="abcdef";
    // cout<<s.substr(2,3); //cde  pehle wale ka index phir udhar se leke dusre element ke jitna length
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    // abcdefgh -> required output efgh
    int n=str.length();
    cout<<str.substr(n/2);
}