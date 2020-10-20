#include <iostream>
#include <climits>
using namespace std;

int max_cross_sum(int arr[], int l, int m, int r) {
    int left_sum = INT_MIN;
    int sum = 0;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        if (left_sum < sum) {
            left_sum = sum;
        }
    }
    int right_sum = INT_MIN;
    sum = 0;
    for (int j = m + 1; j <= r; j++) {
        sum += arr[j];
        if (right_sum < sum) {
            right_sum = sum;
        }
    }
    return left_sum + right_sum;
}

int max_sum(int arr[], int l, int r) {
    if (l == r) {
        return arr[l];
    }
    else {
        int m = l + (r - l) / 2;
        int left_sum = max_sum(arr, l, m);
        int right_sum = max_sum(arr, m + 1, r);
        int cross_sum = max_cross_sum(arr, l, m, r);
        if (left_sum > right_sum && left_sum > cross_sum) {
            return left_sum;
        }
        else if (right_sum > left_sum && right_sum > cross_sum) {
            return right_sum;
        }
        else {
            return cross_sum;
        }
    }
}

int main(void) {
	#ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << max_sum(arr, 0, n - 1);
    return 0;
}