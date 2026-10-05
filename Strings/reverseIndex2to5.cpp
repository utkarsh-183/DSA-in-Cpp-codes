#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="Raghav";
    cout<<str<<endl;
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}