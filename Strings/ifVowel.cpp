#include<iostream>
#include<string>
using namespace std;
int main(){
    string string; //we can give any name to string,but not recommended
    cout<<"Enter the string : ";
    getline(cin,string);
    int count=0;
    int i=0;
    while(string[i]!='\0'){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        count++;
        i++;
    }
    cout<<count;
} 