#include<iostream>
#include<string>
using namespace std;

//Normal method
// int main(){
//     string str="Pragya Tiwari";
//     string s="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='a' && str[i]!='A') s.push_back(str[i]);
//     }
//     cout<<s;
// } 

//Using Recursion
void removeChar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch= original[0];
    if(ch=='a' || ch=='A') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}
int main(){
    string str="Anjali Tripathi";
    removeChar("",str);
}   