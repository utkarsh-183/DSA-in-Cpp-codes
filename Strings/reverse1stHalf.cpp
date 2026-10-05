#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<str<<endl;
    int n=str.length();
    reverse(str.begin()+0,str.begin()+n/2);
    cout<<str;
}