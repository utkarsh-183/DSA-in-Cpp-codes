#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int>v(5,7); //initial size=5 and each element ha value=7
    // cout<<v[3];
    vector<int>v;
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}