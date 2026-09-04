#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter the number : ";
    cin >> n;
    int original = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    if (rev == original)
    {
        cout << original << " - Palindrome number";
    }
    else
    {
        cout << original << " - Not a palindrome number ";
    }
}