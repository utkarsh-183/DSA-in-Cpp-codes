#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,9,7,8};
    int n=5;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    cout<<flag<<endl; 
} 