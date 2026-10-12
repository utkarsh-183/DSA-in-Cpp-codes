#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    // int arr[n];
    vector<int> arr(n);
    for (int i = 0; i < n; i++) { // n-1 passes because we require atmost n-1 passes for n elements
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //bubble sort optimished
    for(int i=0;i<n-1;i++){
        // transverse
        bool flag=true;  //sorted
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=arr[j];
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}   