//it is not possible On Unsorted Data;
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return true;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

int main() {
    int arr[] = {40, 10, 30, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    sort(arr, arr + n);
    if (binarySearch(arr, n, key))
        cout << "Element found." << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
