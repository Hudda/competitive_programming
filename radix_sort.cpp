#include <iostream>
using namespace std;

void counting_sort(int arr[], int n; int mul) {
    int sorted[]
}

int radix_sort(int arr[], int n) {
    int largest = 0;
    for (int i = 0; i < n; i++) {
        largest = max(largest, arr[i]);
    }
    int mul = 1;
    while (largest) {
        counting_sort(arr, n, mul);
        mul *= 10;
        largest /= 10;
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
    radix_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}