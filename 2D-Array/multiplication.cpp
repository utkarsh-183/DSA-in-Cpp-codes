#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter rows of 1st matrix : "<<endl;
    cin >> m;
    int n;
    cout << "Enter coloumns of 1st matrix : "<<endl;
    cin >> n;

    int p;
    cout << "Enter rows of 2nd matrix : "<<endl;
    cin >> p;
    int q;
    cout << "Enter coloumns of 2nd matrix : "<<endl;
    cin >> q;
    if(n==p){
        int a[m][n];
        cout<<"Enter the element of 1st matrix : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        int b[p][q];
        cout<<"Enter the elements of 2nd matrix : "<<endl;;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        //resultant
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            } 
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else 
    cout<<"Matrix multiplication is not possible ";
}    