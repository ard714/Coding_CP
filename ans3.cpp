#include <bits/stdc++.h>
using namespace std;

// Function to calculate the distances
vector<int> dist(int a[], int n, int x) {
    vector<int> arr(n + 1);
    arr[0] = a[0];
    for (int i = 1; i < n; i++) {
        arr[i] = a[i] - a[i - 1];
    }
    arr[n] = 2 * (x - a[n - 1]);
    return arr;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Get the distances
        vector<int> ans = dist(arr, n, x);

        // Find the maximum element in the distances
        int max_dist = *max_element(ans.begin(), ans.end());
        cout << max_dist << endl;
    }
    return 0;
}