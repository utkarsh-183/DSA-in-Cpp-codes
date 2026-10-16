#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    // int i=s.size()/2;
    // int j=s.size()-1;
    // while(i<j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    // cout<<s;
    if(s.size()%2!=0){
        cout<<"string is not even ";
    }
    int mid=s.size()/2;
    reverse(s.begin()+mid,s.end());
    cout<<"result : "<<endl<<s;
}
 