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
    // wave print
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout<<endl;
        }
        else {
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}