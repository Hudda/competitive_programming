#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long>& arr, long long n, long long c, long long distance) {
    long long start = 0;
    long long cows = 1;
    for (long long i = 1; i < n; i++) {
        long long diff = arr[i] - arr[start];
        if (diff >= distance) {
            cows++;
            start = i;
        }
        if (cows == c) return true;
    }
    return false;
}

long long minDistance(vector<long long>& arr, long long n, long long c) {
    sort(arr.begin(), arr.end());
    long long low = 1, high = arr[n-1] - arr[0];
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (isPossible(arr, n, c, mid)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return high;
}

int main(void) {
    long long t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> arr;
        for (long long i = 0; i < n; i++) {
            long long k;
            cin >> k;
            arr.push_back(k);
        }
        cout << minDistance(arr, n, c) << endl;
    }
}