#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not need to mention the size
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<" "<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<" "<<endl;
    v.push_back(1);
    cout<<v.size()<<" " <<v.capacity()<<" "<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    //cout<<v[4]<<" ";
}
//size is actual no. of elements present where as capacity is maximum length