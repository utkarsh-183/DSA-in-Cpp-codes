#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr[6];
    cout << "enter the string : ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for (int i = 0; i < 6; i++)
    {
        int x = stoi(arr[i]);
        if (x > max)
        {
            max = x;
            maxS = arr[i];
        }
    }
    cout << "maximum value= " << maxS;
}