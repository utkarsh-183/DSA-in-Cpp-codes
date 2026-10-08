#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the no. of elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i])
            count++;
        }
        cout<<count<<" ";
    }
}