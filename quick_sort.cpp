#include <iostream>
using namespace std;

int partition(int arr[], int l, int r) {
    int x = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (arr[j] <= x) {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[r]);
    return i;
}

void quick_sort(int arr[], int l, int r) {
    if (l < r) {
        int p = partition(arr, l, r);
        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, r);
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
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
    quick_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}