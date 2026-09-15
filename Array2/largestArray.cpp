#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of elements :";
   cin>>n;
   int arr[n];
   for(int i=0;i<=n-1;i++){
       cout<<"Enter each element : ";
       cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
    if(arr[i]>max)
    max=arr[i];
   }
   cout<<"maximum number is:"<<max<<endl;
   
} 