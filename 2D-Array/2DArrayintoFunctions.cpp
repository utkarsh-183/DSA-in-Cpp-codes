#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
    a[0]=5;
}
void change2D(int arr[][3]){    //giving size to column is compulsary
    arr[0][0]=100;
}
int main(){
    int a[3]={1,2,3};
    change(a);
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    change2D(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}