#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}