#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,7,4,2,1,1};
    int n = sizeof(arr)/sizeof (arr[0]);
    //prefix sum
    for(int i=1;i<n;i++){
        arr[i] +=arr[i-1];
    }
    //check if any x exist
    bool flag = false;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag) cout<<"YES, it can be partioned"<<" at "<<idx;
    else cout<<"NO, it cannot be partioned";
}