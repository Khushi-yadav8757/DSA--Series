Q1.Find the largest element in an array
Ans:
#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {2, 8, 1, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element: " << findLargest(arr, n);
    return 0;
}
