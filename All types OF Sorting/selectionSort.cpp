#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 3, 7, 4, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}