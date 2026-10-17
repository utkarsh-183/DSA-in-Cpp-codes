#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i+=1){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<26-count;
}
 