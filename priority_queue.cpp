#include <iostream>
using namespace std;

int size;

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

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int max(int arr[]) {
    return arr[1];
}

int extract_max(int arr[], int n) {
    size = n;
    int max = arr[1];
    arr[1] = arr[size--];
    max_heapify(arr, 1, n);
    return max;
}

void increase_val(int arr[], int i, int val) {
    if (arr[i] > val) {
        cout << "New value is less than current value, can't be inserted" << endl;
        return;
    }
    arr[i] = val;
    while (i > 1 && arr[i/2] < arr[i]) {
        swap(arr[i/2], arr[i]);
        i = i / 2;
    }
}

void insert_value(int arr[], int val, int n) {
    size++;
    arr[size] = -1;
    increase_val(arr, size, val);
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
    size = n;
    int arr[100];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    extract_max(arr, n);
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}