#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=5;i++){
        cout<<a[i]<<" "  ;
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=100;
}

int main(){
    int arr[6]={2,5,6,3,8,162};
    display(arr);
    change(arr);
    display(arr);
}  