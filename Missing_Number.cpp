Q3.Find the missing number in 1 to n
Ans:-
#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n+1) * (n+2) / 2;  // sum of 1 to n+1
    for (int i = 0; i < n; i++) total -= arr[i];
    return total;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number: " << findMissing(arr, n);
    return 0;
}
