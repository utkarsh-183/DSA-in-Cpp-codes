#include<iostream>
using namespace std;

int main(){

    int arr[] = {5,3,7,4,1,9,2};
    int n = sizeof(arr)/4;

    // before swapping
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<endl;
    // after swapping
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}