Q5.Rotate array by k positions
Ans:
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) swap(arr[start++], arr[end--]);
}

void rotate(int arr[], int n, int k) {
    k %= n; // handle k > n
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    rotate(arr, n, k);
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
