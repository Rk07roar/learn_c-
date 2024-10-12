#include <bits/stdc++.h>
using namespace std;

int sentinal(int n, vector<int>& arr, int x) {
    // Store the last element to use as a sentinel
    int last = arr[n - 1];
    arr[n - 1] = x;  // Set the last element to x as a sentinel

    int j = 0;

    // Search for x in the array
    while (arr[j] != x) {
        j++;
    }

    // Restore the last element
    arr[n - 1] = last;

    // Check if we found x within the valid range
    if (j < n - 1 || last == x) {
        return j;  // Return the index where x was found
    } else {
        return -1; // x was not found
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int x;
    cin >> x;

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the sentinel search function
    int result = sentinal(n, arr, x);
    cout << "Index of " << x << ": " << result << endl;

    return 0;
}
