#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number of Row: :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i==n+1-j) //for 1st diagonal row no. =coloumn no.
                cout << "*";        //for 2nd diagonal row no. + coloumn no.=n+1
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}