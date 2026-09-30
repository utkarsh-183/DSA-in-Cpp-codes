#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter rows of 1st matrix : " << endl;
    cin >> m;
    int n;
    cout << "Enter coloumns of 1st matrix : " << endl;
    cin >> n;
    int arr[m][n];
    cout << "Enter your matrix : "<<endl;;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // wave print coloumn wise
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else {
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl; 
        }
    }
}