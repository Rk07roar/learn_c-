#include<bits/stdc++.h>

using namespace std;

int binarySearch(int low, int end, vector<int>& arr, int x) {
    if (low <= end) {
        int mid = (low + end) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(low, mid - 1, arr, x);
        }
        return binarySearch(mid + 1, end, arr, x);
    }
    return -1;
}

int main() {
    int n, x;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cin >> x;

    int result = binarySearch(0, n - 1, arr, x);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
