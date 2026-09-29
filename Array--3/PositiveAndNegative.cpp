#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){ 
        if(v[i]<0)  i++;
        else if(v[j]>=0) j--;
        else  {
           int temp=v[i];
           v[i]=v[j];
           v[j]=temp;
        }
    }

}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(-1);
    v.push_back(4);
    v.push_back(-4);
    v.push_back(7);
    v.push_back(-2);
    v.push_back(9);
    v.push_back(34);
    v.push_back(-91);
    v.push_back(47);
    v.push_back(18);
    v.push_back(-7);
    v.push_back(-45);
    v.push_back(-10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}
 