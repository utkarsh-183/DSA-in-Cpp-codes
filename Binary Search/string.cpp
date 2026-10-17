#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    for(int i=1;i<s.size();i+=2){
        s[i]='#';
    }
    cout<<s;
}
 