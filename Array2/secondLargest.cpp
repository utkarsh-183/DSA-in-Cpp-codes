#include <iostream>
#include <climits>>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of elements :";
    cin >> n;
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    int max = INT_MIN; // INT_MIN = -2147483648 stores the maximun value as -21... so that we can check for negative value also
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    int s_max = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] != max && s_max < a[i])
            s_max = a[i];
    }
    cout << "max is:" << max << endl;
    cout << "Second maximun element is :" << s_max << endl;
}