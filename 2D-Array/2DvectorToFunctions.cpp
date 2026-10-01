#include<iostream>
#include<vector>
using namespace std;
void change2Dvector(vector<vector<int>>&v){
    v[0][0]=100;
}
int main(){
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    cout<<v[0][0]<<endl;
    change2Dvector(v);
    cout<<v[0][0];
} 