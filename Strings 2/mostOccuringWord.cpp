#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="raghav maths is a maths teacher. he is a maths DSA mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxcount=1;
    int count=1;
    for(int i=0;i<v.size();i++){
        if (v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(count,maxcount);
    }
    count=1;
    for(int i=0;i<v.size();i++){
        if (v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}