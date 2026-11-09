#include <iostream>
using namespace std;
int n; // global variable
void generate(string s)
{
    if (s.length() == n)
    {
        cout << s << endl;
        return;
    }
    generate(s + '0');
    if (s == "" || s[s.length() - 1] == '0')
    {
        generate(s + '1');
    }
}
int main()
{
    cin >> n;
    generate("");
}