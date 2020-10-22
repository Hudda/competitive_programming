#include <iostream>
using namespace std;

void counting_sort(int arr[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }
    int aux[k + 1], sorted[n + 1];
    for (int i = 0; i <= k; i++) {
        aux[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        aux[arr[i]]++;
    }
    for (int i = 1; i <=k; i++) {
        aux[i] += aux[i-1];
    }
    for (int i = n-1; i >= 0; i--) {
        sorted[aux[arr[i]]] = arr[i];
        aux[arr[i]]--;
    }
    for (int i = 1; i <=n; i++) {
        cout << sorted[i] << " ";
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
    counting_sort(arr, n);
    return 0;
}