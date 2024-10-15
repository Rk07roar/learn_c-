#include <bits/stdc++.h>
using namespace std;

int bsearch(int n, vector<int>& A, int key_to_search) {
    int lg = log2(n); 
    int pos = 0;

    for (int i = lg; i >= 0; i--) {
        int new_pos = pos | (1 << i);
        if (new_pos < n && A[new_pos] <= key_to_search) {
            pos = new_pos;
        }
    }
    return (A[pos] == key_to_search) ? pos : -1;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());

    cin >> x;
    cout << bsearch(n, A, x) << endl; 
    return 0;
}
