#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,9,7,8,9,6,4,3,2,8,7};
    int n = 13;
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    cout<<res<<endl;
}