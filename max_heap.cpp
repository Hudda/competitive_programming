#include <iostream>
using namespace std;

void max_heapify(int arr[], int i, int n) {
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest;
    if (left <= n && arr[left] > arr[i]) {
        largest = left;
    }
    else {
        largest = i;
    }
    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        max_heapify(arr, largest, n);
    }
}

void build_max_heap(int arr[], int n) {
    for (int i = n/2; i >= 1; i--) {
        max_heapify(arr, i, n);
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
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build_max_heap(arr, n);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}