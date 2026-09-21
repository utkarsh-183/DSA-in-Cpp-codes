#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {5,3,7,4,1,9,2};
    int n = sizeof(arr)/4;
    sort(arr, arr+n);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}