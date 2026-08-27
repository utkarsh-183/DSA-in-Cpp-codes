#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    set<int> s1 = {1, 2, 3, 4, 5};
    set<int> s2 = {3, 4, 5, 6, 7};

    vector<int> ans;

    set_difference(
        s1.begin(), s1.end(),
        s2.begin(), s2.end(),
        back_inserter(ans)
    );

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}